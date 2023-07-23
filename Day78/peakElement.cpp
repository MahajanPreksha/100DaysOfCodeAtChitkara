#include<iostream>
#include<vector>
using namespace std;
int f(vector<int> &v, int n){
    int low = 0, high = n - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid==0){
            if(v[mid]>v[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(v[mid]>v[mid-1]){
                return n - 1;
            }
            else{
                return n - 2;
            }
        }
        else{
            if(v[mid]>v[mid+1] && v[mid]>v[mid-1]){
                return mid;
            }
            else if(v[mid]>v[mid-1]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int res = f(v, n);
    cout<<res;
    return 0;
}
