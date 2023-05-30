#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the 5 digit number: ";
    cin>>n;
    int first, second, third, fourth, fifth, sum;
    first = n/10000;
    n %=10000;
    second = n/1000;
    n %=1000;
    third = n/100;
    n %=100;
    fourth = n/10;
    fifth = n%10;
    sum = first + fifth;
    cout<<"Sum of first and fourth digit is: "<<sum;
    return 0;
}