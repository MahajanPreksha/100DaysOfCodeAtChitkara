#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countSort(vector<int>& a){
    int n = a.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(a[i], maxi);
    }
    vector<int> freq(maxi+1, 0);
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    for(int i=1; i<=maxi; i++){
        freq[i] += freq[i-1];
    }
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[a[i]]] = a[i];
    }
    for(int i=0; i<n; i++){
        a[i] = ans[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    countSort(a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
