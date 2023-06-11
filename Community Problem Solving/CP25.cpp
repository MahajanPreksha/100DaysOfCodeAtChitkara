#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main() {
   int T;
   cin>>T;
   while(T--){
	  	int N, A, B;
	   	float count = 0, cnt = 0;
	   	cin>>N>>A>>B;
	   	int X[N];
	   	for(int i=0; i<N; i++){
		   	cin>>X[i];
		   	if(X[i]==A){
		   	  count++;
		   	}
		   	if(X[i]==B){
		   	  cnt++;
		   	}
	   	}
	     cout<<fixed<<setprecision(10);
	     cout<<(count*cnt)/(N*N)<<endl;
   }
	return 0;
}
