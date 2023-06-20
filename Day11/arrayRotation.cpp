#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int k;
    cin>>k;
    k = k%n; //k can be greater than n
    int ansArray[n];
    int j = 0;
    for(int i=n-k; i<n; i++){
        ansArray[j++]=array[i];
    }
    for(int i=0; i<=k; i++){
        ansArray[j++]=array[i];
    }
    for(int i=0; i<n; i++){
        cout<<ansArray[i]<<" ";
    }
    return 0;
}
