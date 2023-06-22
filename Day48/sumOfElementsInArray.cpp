#include<iostream>
using namespace std;
int f(int *a, int idx, int n){
    if (idx==n-1){
        return a[idx];
    }
    return a[idx] + f(a, idx+1, n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &ele: a){
        cin>>ele;
    }
    int sum = f(a, 0, n);
    cout<<sum;
    return 0;
}