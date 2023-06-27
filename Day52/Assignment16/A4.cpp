#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=*(*(a+i)+i);
    }
    cout<<sum;
    return 0;
}