#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else if(a==0){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b);
    return 0;
}
