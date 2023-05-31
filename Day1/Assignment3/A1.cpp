#include<iostream>
using namespace std;
int main(){
    int length, breadth;
    cout<<"Enter the values of length and breadth: ";
    cin>>length>>breadth;
    if (length==breadth){
        cout<<"Square";
    }
    else{
        cout<<"Not a square but a rectangle";
    }
    return 0;
}
