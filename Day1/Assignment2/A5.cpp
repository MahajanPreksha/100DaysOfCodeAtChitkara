#include<iostream>
using namespace std;
int main(){
    int n, first, second, third, sum;
    cout<<"Enter the 3 digit number: ";
    cin>>n;
    first = n/100;
    n %=100;
    second = n/10;
    third = n%10;
    sum = first + second + third;
    cout<<"Sum of 3 digits = "<<sum;
    return 0;
}