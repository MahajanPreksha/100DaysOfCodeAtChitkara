#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int &ele: array){
        cin>>ele;
    }
    for(int i=n-1; i>=0; i--){
        cout<<array[i]<<" ";
    }
    return 0;
}