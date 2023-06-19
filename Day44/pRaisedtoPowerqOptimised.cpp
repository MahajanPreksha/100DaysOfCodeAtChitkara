#include<iostream>
using namespace std;
int f(int p, int q){
    if(q==0){
        return 1;
    }
    else if(q%2==0){
        int res = f(p, q/2);
        return res*res;
    }
    else{
        int result = f(p, (q-1)/2);
        return p * result * result;
    }
}
int main(){
    int p, q;
    cin>>p>>q;
    int result = f(p,q);
    cout<<result;
    return 0;
}