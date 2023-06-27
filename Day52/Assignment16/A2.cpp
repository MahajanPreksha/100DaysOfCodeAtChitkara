#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int sum = 0;
    int *ptr = &v[0];
    for(int i=0; i<n; i++){
        sum +=*ptr;
        ptr++;
    }
    cout<<sum;
    return 0;
}