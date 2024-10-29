// class 1 itni khas nahi thi


/*

### question 1  -> reverse a queue

Approach 1
I can push all the elements into a stack and then push them back to the queue

```cpp


    // Approach 1 of reversing the Queue

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    stack <int> st;

    for(int i = 0;i< q.size();i++){
        st.push(q.front());
        q.pop();
    }

    // push elements back to the queue

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
        // Print the reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
```

approach 2 
Using recursion - > remember this thing, recursion helps in both stack and queue reversal

```cpp


void reversal(queue<int>& q) {
    if (q.empty()) {
        return;
    }
    // store the value
    int temp = q.front();

    // remove the element
    q.pop();

    // call the next function for removal
    reversal(q);

    // put back the elements
    q.push(temp);
}

```

##  interleave Queue

Concept -> That means we have to take one element from the first half and the next element from the second half in the queue, alternatively.

### Approach

```cpp

    // interleave Queue
    int size;

    cout<<"Enter the size of the queue"<<endl;
    cin>>size;
    
    // put values into the queue
    for(int i=0;i<size;i++){
        int temp;
        cout<<"Please enter the "<<i+1<<" value"<<endl;
        cin>>temp;
        q.push(temp);
    }


    // now i want to make two queues-> first and the second half

    int newSize = size/2;

    queue<int> q1;

    for(int i=0;i<size;i++){
        q1.push(q.front());
        q.pop();
    }


    // intterleaving now

    while(!q.empty() && !q1.empty()){
        q.push(q1.first());
        q1.pop();

        q.push(q.first());

        q.pop();

 
    }

    // if odd

    while(size&1 ){ //check if odd
    int temp = q.front();
    q.pop();
    q.push(temp);
    }

```

Insert it inside a function






*/

#include <bits/stdc++.h>
using namespace std;


void firstNegative(vector<int> arr, int k, int n, deque<int>& q) {
    // handle and create the first window
    // let k be the size of the window and i assume it's less than n

    // Handle the first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            q.push_back(i);
        }
    }

    // handle the rest of the data
    for (int i = k; i < n; i++) {
        // purani window ka ans
        if (q.empty()) {
            cout << 0 << " ";
        } else {
            cout << arr[q.front()] << " ";
        }

        // remove out of the window elements
        while (!q.empty() && (i - q.front() >= k)) {
            q.pop_front(); // remove the elements
        }

        // add new elements
        // check for the current element 
        if (arr[i] < 0) {
            q.push_back(i);
        }
    }

    // print the last ans
    if (q.empty()) {
        cout << 0 << endl;
    } else {
        cout << arr[q.front()] << endl;
    }
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    int n = arr.size();
    deque<int> q;

    firstNegative(arr, k, n, q);

    return 0;
}


// docker pull iproyal/pawns-cli:latest
// docker run --restart=on-failure:5 iproyal/pawns-cli:latest -email=pawns.app@realuser.anonaddy.com -password=G7j@2kP#r9Tq4Wz8$Lx5Vb3Yf^N1mQe6*Hc0Zs8Jv+Rk2Xy5 -device-name=raspberrypi -device-id=raspberrypi1 -accept-tos


