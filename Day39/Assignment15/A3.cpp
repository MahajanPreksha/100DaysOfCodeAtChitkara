#include<iostream>
using namespace std;
int largestNum(int num1, int num2, int num3, int *largest){
    *largest = max(num1, max(num2, num3));
    return *largest;
}
int smallestNum(int num1, int num2, int num3, int *smallest){
    *smallest = min(num1, min(num2, num3));
    return *smallest;
}
int main(){
    int num1, num2, num3, largest, smallest;
    cin>>num1>>num2>>num3;
    cout<<"Largest number: "<<largestNum(num1, num2, num3, &largest)<<endl;
    cout<<"Smallest number: "<<smallestNum(num1, num2, num3, &smallest)<<endl;
    return 0;
}