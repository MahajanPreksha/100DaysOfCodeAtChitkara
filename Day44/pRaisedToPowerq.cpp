#include<iostream>
using namespace std;
int f(int p, int q){
    if(q==0){
        return 1;
    }
    else{
        return p*f(p, q-1);
    }
}
int main(){
    int p, q;
    cin>>p>>q;
    int result = f(p,q);
    cout<<result;
    return 0;
}