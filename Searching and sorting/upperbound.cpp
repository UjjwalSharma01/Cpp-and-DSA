// fiding the last occurance using
#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> v,int size, int target){
    int start = 0;
    int end = size -1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end){
        if(v[mid] == target){
            ans  = mid;
            // search in right
            start = mid+1;
        }else if(v[mid]>target){
            // search in left
            end = mid-1;
        }else{
            // search in right
            start = mid +1;
        }
        mid = (start+end)/2; //update
    }
    return ans; // if not found
}
int main(){
    vector<int> v = {1,2,2,2,2,2,2,3,4};
    int size = v.size();
    int target = 2; //finding the last occurance of this particular number
    int tfinal = upperBound(v,size,target);
    cout<<tfinal;
    return 0;
}     