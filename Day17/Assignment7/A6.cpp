#include<iostream>
#include<climits>
using namespace std;

int f(int arr[], int n){
    int prefix[n], suffix[n];
    prefix[0] = INT_MIN;
    suffix[n-1] = INT_MAX;
    for(int i=1; i<n; i++){
        prefix[i] = max(prefix[i-1], arr[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        suffix[i] = min(suffix[i+1], arr[i+1]);
    }
    for(int i=0; i<n; i++){
        if(prefix[i] < arr[i] && arr[i] < suffix[i]){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int result = f(arr, n);
    cout<<"Result: "<<result<<endl;
    return 0;
}
