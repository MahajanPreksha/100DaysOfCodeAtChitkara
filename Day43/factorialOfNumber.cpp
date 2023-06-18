#include<iostream>
using namespace std;
int fact(int num){
    if(num==1 || num==0){
        return 1;
    }
    else{
        int ans;
        ans = num * fact(num-1);
        return ans;
    }
}
int main(){
    int num;
    cin>>num;
    int ans = fact(num);
    cout<<ans;
    return 0;
}
