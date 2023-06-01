#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rev = 0;
    while(num>0){
        int lastDig = num%10;
        rev = rev*10 + lastDig;
        num = num/10;
    }
    cout<<"Reverse of the number: "<<rev;
    return 0;
}