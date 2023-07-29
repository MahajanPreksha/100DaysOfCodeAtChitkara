#include<iostream>
using namespace std;
class Rectangle{
public:
    int l;
    int b;
    Rectangle(){ //default constructor: no arguments have been passed
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y){ //parametrised constructor: arguments have been passed
        l = x;
        b = y;
    }
    Rectangle(Rectangle& r){ //copy constructor: when we want to initialise an object by another existing object
        l = r.l;
        b = r.b;
    }
};
int main(){
    Rectangle R1;
    cout<<R1.l<<" "<<R1.b<<endl;
    Rectangle R2(3, 4);
    cout<<R2.l<<" "<<R2.b<<endl;    
    Rectangle R3 = R2;
    cout<<R3.l<<" "<<R3.b<<endl;
    return 0;
}
