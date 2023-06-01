#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count = 0;
    while(num>0){
        count++;
        num = num/10;
    }
    cout<<"Number of digits = "<<count;
    return 0;
}