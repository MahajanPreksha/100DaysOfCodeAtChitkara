#include<iostream>
using namespace std;
int sqNaturalNumbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    sqNaturalNumbers(n);
    return 0;
}
