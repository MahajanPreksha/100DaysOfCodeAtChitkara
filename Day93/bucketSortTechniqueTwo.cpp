#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(float arr[], int n){
    vector<vector<float>> bucket(n, vector<float> ());
    float maxi = arr[0], mini = arr[0];
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    float range = (maxi-mini)/n;
    for(int i=0; i<n; i++){
        int index = (arr[i]-mini)/range;
        float diff = (arr[i] - mini)/range - index;
        if(diff==0 && arr[i]!=mini){
            bucket[index-1].push_back(arr[i]);
        }
        else{
            bucket[index].push_back(arr[i]);
        }

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
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39, 10.89};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}