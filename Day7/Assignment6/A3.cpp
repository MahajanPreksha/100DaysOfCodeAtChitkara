#include<iostream>
using namespace std;
int voteEligibility(int age){
    if(age>=18){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    int age;
    cin>>age;
    voteEligibility(age);
    return 0;
}