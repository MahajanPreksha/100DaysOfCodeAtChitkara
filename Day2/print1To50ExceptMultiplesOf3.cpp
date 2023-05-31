#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=1; i<=50; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
