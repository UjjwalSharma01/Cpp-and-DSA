#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,1,1,1,1};
    int length = 8;
    map<int,int> m;
    for(int i=0;i<length;i++){
        m[arr[i]]++;
    }

    // iterating through the map
    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<m[1]<<endl;
    return 0;
}