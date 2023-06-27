#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int *ptr = &v[k-1];
    cout<<*ptr;
    return 0;
}
