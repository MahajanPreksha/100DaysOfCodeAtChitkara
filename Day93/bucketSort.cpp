#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(float arr[], int n){
    vector<vector<float>> bucket(n, vector<float> ());
    for(int i=0; i<n; i++){
        int index = arr[i] * n;
        bucket[index].push_back(arr[i]);
    }
    for(int i=0; i<n; i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(), bucket[i].end());
        }
    }
    int k = 0;
    for(int i=0; i<n; i++){
        for(float num: bucket[i]){
            arr[k++] = num;
        }
    }
}
int main(){
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}