#include<iostream>
using namespace std;
int sum(int num){
    if(num>=0 && num<=9){
        return num;
    }
    else{
        return sum(num/10) + num%10;
    }
}
int main(){
    int num;
    cin>>num;
    int result = sum(num);
    cout<<result;
    return 0;
}
