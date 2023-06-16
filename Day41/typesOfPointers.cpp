#include<iostream>
using namespace std;
int main(){
    //Wild Pointer
    int *ptr;
    cout<<ptr<<" "<<*ptr<<endl;
    //Null Pointer
    int *p1 = NULL;
    int *p2 = 0; //0 is mostly special reserved value
    int *p3 = '\0';
    cout<<p1<<" "<<p2<<" "<<p3<<endl;
    // Dangling Pointer
    int *p4 = NULL;
    {
        int x = 10;
        // *p4 = &x;
    }
    cout<<p4<<endl;
    // Void Pointer
    float f = 10.2;
    int x = 10;
    void *p5 = &f;
    p5 = &x;
    cout<<p5<<endl;
    int *IntPtr = (int *)p5;
    cout<<*IntPtr;
    return 0;
}