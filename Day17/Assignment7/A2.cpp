#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int &ele: array){
        cin>>ele;
    }
    int smallest = array[0], largest = array[0];
    for(int ele: array){
        if(ele>largest){
            largest = ele;
        }
        if(ele<smallest){
            smallest = ele;
        }
    }
    cout<<smallest+largest;
    return 0;
}