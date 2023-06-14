#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    int *ptr = &x;
    int *ptr1 = &y;
    int res;
    int *resptr = &res;
    *resptr = *ptr + *ptr1;
    cout<<res<<endl;
    return 0;
}
