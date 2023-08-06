#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countSort(vector<int> &a, int pos){
    int n = a.size();
    vector<int> freq(10, 0);
    for(int i=0; i<n; i++){
        freq[(a[i]/pos)%10]++;
    }
    for(int i=1; i<10; i++){
        freq[i] +=freq[i-1];
    }
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[(a[i])/pos%10]] = a[i];
    }
    for(int i=0; i<n; i++){
        a[i] = ans[i];
    }
}
void radixSort(vector<int>& a){
    int maxi = INT_MIN;
    for(auto x:a){
        maxi = max(x, maxi);
    }
    for(int pos=1; maxi/pos>0; pos*=10){
        countSort(a, pos);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    radixSort(a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}