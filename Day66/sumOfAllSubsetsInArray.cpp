#include<iostream>
#include<vector>
using namespace std;
void f(int *arr, int n, int i, int sum, vector<int> &result){
    if(i==n){
        result.push_back(sum);
        return;
    }
    f(arr, n, i+1, sum+arr[i], result);
    f(arr, n, i+1, sum, result);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> result;
    f(arr, n, 0, 0, result);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
