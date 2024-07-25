// implementing the lower bound for the fiven array


#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> v, int size, int target){
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){
        if(v[mid] == target){
            ans = mid;
            cout<<ans<<endl;
            // search in left
            end = mid -1;
        }
        else if(v[mid]>target){
            //search in right
            end = mid-1;
        }else if(v[mid]<target){
            // search in left
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    vector<int> v = {1,2,2,2,2,2,2,2,2,2,3,4,5};
    int size = v.size();
    int target = 2; 
    // cout<<"type something";
    // int type;
    // cin>>type;
    // cout<<type<<endl;
    int final = lowerBound(v,size,target);
    cout<<final<<endl;
    return 0;
}