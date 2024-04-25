#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a,long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i<a.size(); i++) {
        sum += a[i];
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
    }
    return maxLen;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long k;
    cout<<"Enter the sum you want to find: ";
    cin>>k;
    cout<<"The length of the longest subarray with sum "<<k<<" is: "<<longestSubarrayWithSumK(a,k)<<endl;
}