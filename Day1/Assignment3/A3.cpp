#include<iostream>
using namespace std;
int main(){
    int CP, SP;
    cout<<"Enter cost price: ";
    cin>>CP;
    cout<<"Enter selling price: ";
    cin>>SP;
    if(SP>CP){
        cout<<"Profit = "<<SP-CP;
    }
    else if(CP>SP){
        cout<<"Loss = "<<CP-SP;
    }
    else{
        cout<<"No Profit No Loss";
    }
    return 0;
}