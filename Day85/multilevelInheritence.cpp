#include<iostream>
using namespace std;
class Parent{
    public:
        Parent(){
            cout<<"Parent Class"<<endl;
        }
};
class Child: public Parent{
    public:
        Child(){
            cout<<"Child Class"<<endl;
        }
};
class Grandchild: public Child{
    public:
        Grandchild(){
            cout<<"Grandchild Class"<<endl;
        }
};
int main(){
    Grandchild C;
    return 0;
}