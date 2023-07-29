#include<iostream>
using namespace std;
class A{
    int x;
    friend void print(A &obj);
};
void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    A obj;
    print(obj);
    return 0;
}