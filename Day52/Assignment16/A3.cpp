#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int sum = 0;
    int *ptr = &v[n-1];
    for(int i=*ptr; i>0; i--){
        cout<<*ptr<<" ";
        ptr--;
    }
    return 0;
}