#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            res -=i;
        }
        else{
            res +=i;
        }
    }
    cout<<res;
    return 0;
}