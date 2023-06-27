#include <iostream>
using namespace std;
int mthSummation(int n, int m){
    if (m==1) {
        return(n*(n+1))/2;
    }
    else{
        int previousSum = mthSummation(n, m-1);
        return mthSummation(previousSum, 1);
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    int result = mthSummation(n, m);
    cout<<result;
    return 0;
}
