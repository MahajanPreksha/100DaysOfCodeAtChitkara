#include<iostream>
using namespace std;
int Sum(int x, int y){
    int sum = 0;
    for(int i=x; i<=y; i++){
        sum +=i;
    }
    return sum;
}
int Sum_optimised(int x, int y){
    int n = y - x + 1;
    int d = 1;
    int sum = (n*(2*x + (n-1)*d))/2;
    return sum;
}
int main(){
    int x, y;
    cin>>x>>y;
    cout<<Sum(x,y)<<endl;
    cout<<Sum_optimised(x,y)<<endl;
    return 0;
}
