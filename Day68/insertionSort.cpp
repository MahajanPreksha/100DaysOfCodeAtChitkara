#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &v){
    int n = v.size();
    for(int i=1; i<n; i++){
        int curr = v[i];
        int j = i - 1;
        while(j>=0 && v[j]>curr){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = curr;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    insertionSort(v);
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}
