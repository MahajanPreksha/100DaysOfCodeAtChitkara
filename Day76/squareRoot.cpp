#include<iostream>
using namespace std;
int sqrt(int n){
    int low = 1, high = n;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid*mid<=n){
            ans = mid;
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
    int res = sqrt(n);
    cout<<res;
    return 0;
}
