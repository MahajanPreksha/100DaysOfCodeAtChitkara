#include<iostream>
using namespace std;
int oddNumbers(int a, int b){
    for(int i=a; i<=b; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a, b;
    cin>>a>>b;
    oddNumbers(a, b);
    return 0;
}