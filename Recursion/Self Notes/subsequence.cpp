#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string str, string& output, int i){
    // Base case: when the index is out of bounds, stop
    if(i == str.length()){
        cout << output << endl;
        return;
    }

    // Two options: include the current character or exclude it
    // Exclude
    printSubsequence(str, output, i+1); // Exclude the current character and move forward

    // Include
    output.push_back(str[i]); // Include the current character
    printSubsequence(str, output, i+1); // Move forward
    output.pop_back(); // Remove the last character for the next iteration
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequence(str, output, i);
    return 0;
}