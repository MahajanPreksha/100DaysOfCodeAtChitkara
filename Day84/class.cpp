#include<iostream>
using namespace std;
/*class class_name{
    int data1;
    int data2
}; */
class Fruit{
public:
    string name;
    string colour;
};
int main(){
    Fruit apple; //object of type Fruit
    apple.name = "Apple";
    apple.colour = "Red";
    cout<<apple.name<<" "<<apple.colour<<endl;

    Fruit *mango = new Fruit();
    mango->name = "Mango";
    mango->colour = "Yellow";
    cout<<mango->name<<" "<<mango->colour<<endl;
    return 0;
}
