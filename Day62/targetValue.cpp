#include<iostream>
using namespace std;
bool f(int *arr, int n, int i, int x){
    if(i==n){
        return false;
    }
    return (arr[i]==x || f(arr, n, i+1, x));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool result = f(arr, n, 0, x);
    if(result){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
