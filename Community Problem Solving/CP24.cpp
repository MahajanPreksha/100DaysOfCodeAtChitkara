#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int K, N;
	cin>>K>>N;
	int t = K + N;
	string A[K];
	string B[N];
	int i = 0;
	while(i<K){
	   cin>>A[i];
	   i++;
	}
	i=0;
	while(i<N){
	    cin>>B[i];
	    i++;
	}
	i=0;
	int j,x;
	while(i<N){
	  x = 1;
	  for(j=0; j<K; j++){
	    if(B[i].length()>=47){
	      cout<<"Good"<<endl;
	      x = 2;
	      break;
	    }
	    else{
	      if(B[i].find(A[j])==-1){
	        j;
	      }
	      else{
	        cout<<"Good"<<endl;
	        x = 2;
	       break;
	      }
	   }
	 }
	 if(x==1){
	   cout<<"Bad"<<endl;
	 }
	   i++;
	}
	return 0;
}
