#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int &ele: array){
        cin>>ele;
    }
    int range_sum = (n *(n+1))/2;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=array[i];
    }
    int missing = range_sum - sum;
    cout<<missing;
    return 0;
}