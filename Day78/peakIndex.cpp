#include<iostream>
#include<vector>
using namespace std;
int f(vector<int> &v, int n){
    int low = 0, high = n - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]>v[mid-1]){
            ans = max(ans, mid);
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
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
