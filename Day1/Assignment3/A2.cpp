#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num<0){
        num = num * (-1);
    }
    cout<<"Absolute value of number = "<<num;
    return 0;
}