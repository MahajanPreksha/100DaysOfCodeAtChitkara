#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0; i<N; i++){
	        cin>>A[i];
	    }
	    sort(A, A+N);
	    if(N%2!=0){
	      cout<<"NO"<<endl;
	    }
	    else{
	      int i;
	        for(i=0; i<N; i+=2){
	            if(A[i]!=A[i+1]){
	                cout<<"NO"<<endl;
	                break;
	            }
	        }
	        if(i==N)
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
