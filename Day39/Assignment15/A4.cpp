#include<iostream>
using namespace std;
int swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"Before swapping, numbers are: ";
    cout<<" "<<a<<" "<<b<<endl;
    int *ptr1 = &a, *ptr2 = &b;
    swap(a, b);
    cout<<"After swapping, numbers are: "<<a<<" "<<b;
    return 0;
}