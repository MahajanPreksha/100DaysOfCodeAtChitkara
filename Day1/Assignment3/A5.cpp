#include<iostream>
using namespace std;
int main(){
    char op;
    float num1, num2;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    switch(op){
        case '+': cout<<num1 + num2;
        break;
        case '-': cout<<num1 - num2;
        break;
        case '*': cout<<num1 * num2;
        break;
        case '/': cout<<num1 / num2;
        break;
        default: cout<<"Error! The operator is not correct";
        break;
    }
    return 0;
}