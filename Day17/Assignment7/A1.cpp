#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int &ele: array){
        cin>>ele;
    }
    int countEven = 0, countOdd = 0;
    for(int ele: array){
        if(ele%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    cout<<"Count of odd integers: "<<countOdd<<endl;
    cout<<"Count of even integers: "<<countEven;
    return 0;
}
