#include<iostream>
using namespace std;
int main(){
    cout<<"Before Swapping"<<endl;
    int a, b;
    cin>>a>>b;
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;
    int c;
    cout<<"After Swapping"<<endl;
    c = b;
    b = a;
    a = c;
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;
    return 0;
    }