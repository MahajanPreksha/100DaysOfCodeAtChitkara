#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *=i;
    }
    cout<<"Factorial of number is: "<<fact;
    return 0;
}
