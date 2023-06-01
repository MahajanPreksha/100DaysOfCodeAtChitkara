#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=i;
    }
    cout<<"Sum of first "<<n<<" numbers = "<<sum;
    return 0;
}