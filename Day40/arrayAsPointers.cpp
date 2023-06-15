#include<iostream>
using namespace std;
void process(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
    *(arr + 1) = 33;
}
int main(){
    int arr[3] = {5, 1, 2};
    // cout<<arr[0]<<" "<<arr[1]<<endl;
    // cout<<arr<<" "<<&arr[0]<<endl;;
    // cout<<*arr<<" "<<arr[0];
    process(arr, 3);
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int (*p) [3] = &arr;
    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<endl;
    return 0;
}