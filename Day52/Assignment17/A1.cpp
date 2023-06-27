#include <iostream>
using namespace std;
void printPattern(int n){
    if(n<0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printPattern(n - 5);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}
