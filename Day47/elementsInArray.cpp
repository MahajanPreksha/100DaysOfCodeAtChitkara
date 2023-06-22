#include<iostream>
using namespace std;
void f(int *arr, int idx, int n){
    if(idx==n){
        return;
    }
    cout<<arr[idx]<<endl;
    f(arr, idx+1, n);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &ele: arr){
        cin>>ele; 
    }
    f(arr, 0, n);
    return 0;
}
