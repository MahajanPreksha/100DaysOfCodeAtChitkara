#include<iostream>
using namespace std;
int main(){
    int x = 20;
    int *ptr = &x;
    cout<<ptr<<endl<<(ptr + 1)<<endl;
    int arr[2] = {7, 5};
    int *p1 = &arr[0];
    cout<<*++p1<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<arr<<" "<<&arr[0]<<endl;;
    cout<<*arr<<" "<<arr[0];
    return 0;
}