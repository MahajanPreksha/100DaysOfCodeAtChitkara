#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }
    return 0;
}
