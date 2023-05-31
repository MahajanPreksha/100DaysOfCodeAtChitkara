#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum = 0;
    do{
        int num;
        cin>>num;
        sum +=num;
        N--;
    }while(N>0);
    cout<<sum;
    return 0;
}