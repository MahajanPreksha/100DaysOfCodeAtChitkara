#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int &ele: a){
        cin>>ele;
    }
    for(int &ele: b){
        cin>>ele;
    }
    int smallest1 = a[0];
    for(int ele: a){
        if(ele<smallest1){
            smallest1 = ele;
        }
    }
    int smallest2 = b[0];
    for(int ele: b){
        if(ele<smallest2){
            smallest2 = ele;
        }
    }
    cout<<smallest1+smallest2;
    return 0;
}