
# Leetcode 1047

Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

## Approach
- Create a new string and keep adding the characters to it as you traverse the string
- If the last character of the new string is equal to the current character then pop the last character
- Else add the character to the new string
- Return the new string

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

```cpp
string removeDuplicates(string S) {
    string ans = ""; // empty string
    for(int i = 0; i < S.size(); i++) {
        if(!ans.empty() && ans.back() == S[i]) {
            ans.pop_back();
        } else {
            ans.push_back(S[i]);
        }
    }
    return ans;
}
```
# Leetcode 1910

Remove All Occurrences of a Substring in a String 

```cpp
string removeOccurrences(string s, string part) {
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.size());
        pos = s.find(part);
    }
    return s;
}
```

# Leetcode 680

Valid Palindrome II

Given a string s, return true if the s can be palindrome after deleting at most one character from it.

## Approach
- Use two pointers to check if the string is palindrome or not
- we will also have one variable name flag initiaised with 0 initially
- Whenever we get a condition where the palindrome is not satisfied we will try to move the left pointer to the right and right pointer to the left and check if the string is palindrome or not and increase the flag by one
- If the flag is greater than 1 then return false
- Else return true


## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

```cpp
bool validPalindrome(string s) {
    int left = 0;
    int right = s.size()-1;
    int flag = 0;
    while(left<right){
        if(s[left] != s[right]){
            if(flag == 1){
                return false;
            }
            flag++;
            if(s[left+1] == s[right]){
                left++;
            }else if(s[left] == s[right-1]){
                right--;
            }
        }
        left++;
        right--;
    }
    return true;
}
```



# Leetcode 539

Minimum Time Difference

Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

## Approach
- Convert the time to minutes and sort the array
- Calculate the difference between the adjacent elements(to avoid O(n^2) comparisons) and return the minimum difference
- Also calculate the difference between the first and last element to check if the difference is minimum or not


## Complexity Analysis
- Time complexity: O(nlogn)
- Space complexity: O(n)

```cpp

int findMinDifference(vector<string>& timePoints) {
    vector<int> time;
    for(auto t: timePoints){
        int h = stoi(t.substr(0,2));
        int m = stoi(t.substr(3,2));
        time.push_back(h*60+m);
    }
    sort(time.begin(),time.end());
    int ans = INT_MAX;
    for(int i = 1; i < time.size(); i++){
        ans = min(ans,time[i]-time[i-1]);
    }
    ans = min(ans,time[0]+1440-time.back()); // why we did this? because the time is circular so we need to check the difference between the first and last element > then why we added 1440? because the time is in minutes and 24 hours = 1440 minutes


    return ans;
}
```

# Leetcode 647

Palindromic Substrings

Given a string s, return the number of palindromic substrings in it.

## Approach 1
- Find all the possible substrings and check if they are palindrome or not
- If they are palindrome then increase the count
- Return the count

## Complexity Analysis
- Time complexity: O(n^3)
- Space complexity: O(1)

```cpp
// Approach 1
bool isPalindrome(string s){
    int left = 0;
    int right = s.size()-1;
    // first make all the possible substrings and check if they are palindrome or not
    for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        string temp = s.substr(i,j-i+1);
        int left = 0;
        int right = temp.size()-1;
        while(left<right){
            if(temp[left] != temp[right]){
                return false;
            }
            left++;
            right--;
        }
    }   
    
}
return count;
}
```

## Approach 2
- Use the concept of expanding around the center
- For each character in the string, consider it as the center of the palindrome and expand around it
- Two types of strings are possible here: one with odd length and i, j having same centre initially and second with even length and i, j having different centre initially
- For each of these strings, keep expanding around the centre and check if the string is palindrome or not

## Complexity Analysis
- Time complexity: O(n^2)
- Space complexity: O(1)

```cpp
// Approach 2
int countSubstrings(string s) {
    int count = 0;
    for(int i=0;i<s.size();i++){
        // for odd length
        int left = i;
        int right = i;
        while(left>=0 && right<s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
        // for even length
        left = i;
        right = i+1;
        while(left>=0 && right<s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
    }
    return count;
}
```


 

 