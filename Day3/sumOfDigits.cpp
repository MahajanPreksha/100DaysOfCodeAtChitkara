#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum = 0;
    while(num>0){
        int lastDig = num%10;
        sum +=lastDig;
        num /=10;
    }
    cout<<"Sum of all digits: "<<sum;
    return 0;
}