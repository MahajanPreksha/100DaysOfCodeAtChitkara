#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<12){
        cout<<"Child";
    }
    else if(age<18 && age>=12){
        cout<<"Teenager";
    }
    else{
        cout<<"Adult";
    }
    return 0;
}