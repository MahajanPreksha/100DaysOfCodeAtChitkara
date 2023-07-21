#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v, int target, int low, int high){
    int mid = low + (high-low)/2;
    if(low>high){
        return -1;
    }
    if(v[mid]==target){
        return mid;
    }
    if(v[mid]<target){
        return binarySearch(v, target, mid+1, high);
    }
    else{
        return binarySearch(v, target, mid-1, high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int low = 0, high = n - 1;
    int res = binarySearch(v, target, low, high);
    cout<<res;
    return 0;
}