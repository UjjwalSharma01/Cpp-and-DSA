#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
            for(int m=1;m<=n;m++){
        if((m+1)%2==0){
            for(int k=1;k<=m/2;k++){
                int f =0;
            for(int i=1;i<=n;i++){
                cout<<f<<" ";
                f=f+1;
            }
            cout<<endl;
        } 
            
        }
        else {
            int s =1;
            for(int n=1;n<=m/2;n++){
                cout<<s<<" ";
                s = s-1;
            }
            cout<<endl;
        } }
    return 0;
} 