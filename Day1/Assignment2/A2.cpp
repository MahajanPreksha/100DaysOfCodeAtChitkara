#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int c = (a<50 && a<b)? 0:1;
    cout<<c;
    return 0;
}