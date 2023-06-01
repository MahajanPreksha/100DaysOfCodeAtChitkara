#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
      int N;
      cin>>N;
      int A[N];
      int count = 1, temp = 0;
      for(int i=0; i<N; i++){
        cin>>A[i];
        }
      sort(A, A+N);
      for(int i=0; i<N-1;i++){
        if(A[i]==A[i+1]){
          count++;
          }
        else{
          count=1;
          }
        temp = max(temp,count);
      }
    cout<<N-temp<<endl;
    }
	return 0;
}
