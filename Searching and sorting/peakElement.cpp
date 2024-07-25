// finding the peak element in the mountain array
#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int> v, int size){
    int start = 0;
    int end = size -1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(v[mid]<v[mid+1]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = (start+mid)/2;
    }
    return v[end];
}
int main(){
    vector<int> v = {0,10,8,2};
    int size = v.size();
    int ans  = peakElement(v,size);
    cout<<"The peak element is "<<ans<<endl;
    return 0;
}