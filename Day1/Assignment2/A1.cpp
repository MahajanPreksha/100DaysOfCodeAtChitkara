#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    bool flag;
    (num1 == num2)? flag = true : flag = false;
    cout<<flag;
    return 0;
}
