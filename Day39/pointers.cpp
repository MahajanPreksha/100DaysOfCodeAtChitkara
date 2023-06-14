#include<iostream>
using namespace std;
int main(){
    int x = 18;
    int y = 19;
    cout<<&x<<endl<<&y<<endl;;
    int *ptr = &x;
    int *ptr1 = &y;
    cout<<ptr<<endl<<ptr1<<endl;
    cout<<*ptr<<" "<<*ptr1<<endl;
    return 0;
}