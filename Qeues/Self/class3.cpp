/* First non repeating character in the stream of characters

### Problem Statement
Given a stream of characters, find the first non-repeating character from stream. You need to tell the first non-repeating character 

### TEST CASES
1 . "aabc" -> a#bb
2. "abc" -> aaa

### Approach
1. we will use queue to track the sequence of characters
2. we will use a map to track the frequency of the characters


```cpp

#include <bits/stdc++.h>
using namespace std;

void firstNonRepeatingCharacter(string s) {
    queue<char> q;
    map<char, int> freq;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
        if(freq[s[i]] == 1) {
            q.push(s[i]);
        }

        while (!q.empty()) {
            if (freq[q.front()] > 1) {
                q.pop();
                cout<<"# ";
            } else {
                cout << q.front() << " ";
                break;
            }

            if(q.empty()) {
                cout<<"# ";
            }
        }
    }

}

int main() {
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    firstNonRepeatingCharacter(s);
    return 0;
}

```


## Problem 2
gas station problem
description -> a car has to travel from one gas station to another gas station. The car has a tank of capacity C. The car consumes 1 unit of gas to travel 1 unit of distance. For each gas station, we are given the amount of gas available at that gas station and the distance of the gas station from the starting point. We have to find the minimum number of gas stations the car has to stop to reach the destination. If the car stops at a gas station, it will fill the tank to its full capacity.


leetcode link -> https://leetcode.com/problems/gas-station/


### Approach

### Approach 1
1. Using two loops, we will iterate though each value to find out the possible gas stations
2. We will start from each gas station and check if we can reach the destination
3. If we can reach the destination, we will return the number of gas stations

```cpp
int minGasStations(vector<int> &gas, vector<int> &cost, int C) {
    int n = gas.size();
    for (int i = 0; i < n; i++) {
        int j = i;
        int gasLeft = C;
        while (j < n) {
            gasLeft -= cost[j];
            if (gasLeft < 0) {
                break;
            }
            gasLeft += gas[j];
            j++;
        }
        if (j == n) {
            return i;
        }
    }
    return -1;
}
```

### Approach 2
Using two pointers front and rear, we will iterate through the gas stations
1. The catch here here is if let's say we have covered 2 stations and we cannot reach the destination, then we will start from the 3rd station, because each station is contributing `>= 0` gas and when we can't reach the next station with the help of previous things we cannot reach reach individually


```cpp
int minGasStations(vector<int> &gas, vector<int> &cost, int C) {
    int n = gas.size();
    int front = 0;
    int rear = 0;
    int gasLeft = C;
    while (rear < n) {
        gasLeft -= cost[rear];
        if (gasLeft < 0) {
            gasLeft += cost[front];
            front = (front + 1) % n;
            if (front == 0) {
                return -1;
            }
        } else {
            gasLeft += gas[rear];
            rear++;
        }
    }
    return front;
}

```


### Approach 3

we will use few variables namely
1. start -> to keep track of the starting point
2. deficit -> to track the deficit of gas
3. Balance -> to track the balance of gas

logic -> if let's suppose we can reach till second station but not the third one, because of lack of the petrol let's say we have a deficit of 5 units of gas, then we will start from the 3rd station and we will keep track of the deficit and balance of the gas, if after the end of the loop, balance >= deficit, then we can reach the destination and complete the loop, we will return start

```cpp
int minGasStations(vector<int> &gas, vector<int> &cost, int C) {
    int n = gas.size();
    int start = 0;
    int deficit = 0;
    int balance = 0;
    for (int i = 0; i < n; i++) {
        balance += gas[i] - cost[i];
        if (balance < 0) {
            deficit += balance; // why? -> deficit add hona h na, if it's less than 0, then we will start from the next station
            balance = 0;
            start = i + 1;
        }
    }
    return (balance + deficit) >= 0 ? start : -1;
}


```

leetcode link -> https://leetcode.com/problems/gas-station/


## find max element in the window of size k -> same logic as the first non repeating character
*/

