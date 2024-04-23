#include <bits/stdc++.h>
using namespace std;
int main (){
    string s = "!@$@FDSFSDF11wDSAFSDGWERnfsdjnfsdngksgjsdhfj";
    int length = s.length();
    int hash[256] = {0};
    for(int i = 0;i<length;i++){
        hash[s[i]] = hash[s[i]] +1;
    }

    // checking the frequency now
    cout<<hash['@']<<cout;
    return 0;
}