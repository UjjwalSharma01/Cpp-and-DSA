#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "ujjwalsharmaji";
    int length = a.length();
    int hash[26] = {0};
    for(int i =0;i<length;i++){
        // concept to be used character-'a' = hash value
        int character = a[i];
        int initial = 'a';
        hash[(character - initial)] = hash[(character - initial)] +1;
    }

    // counting the frequency
    int check = 'j';
    cout<<hash[check -'a'];
    return 0;
}