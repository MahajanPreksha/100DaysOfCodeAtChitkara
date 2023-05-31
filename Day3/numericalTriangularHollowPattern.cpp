#include<iostream>
using namespace std;
int main(){
    int i, j, k, rows;
    cout<<"Enter Rows = ";
    cin>>rows;
    for(i=rows+1; i>1 ; i--){
        for(j=i; j>2; j--){
            cout<<" ";
            }
        for(k=1; k<=(rows-i+1); k++){
            if(k==1){
                cout<<(rows-i+2);
                }
            else{
                cout<<" ";
                }
            }
        for(int m=k;m>=1;m--){
            if(m==1){
                cout<<(rows-i+2);
                }
            else{
                cout<<" ";
                }
            }
        cout<<endl;
    }
    return 0;
}