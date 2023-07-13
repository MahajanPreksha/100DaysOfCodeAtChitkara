#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int v[N];
	    for(int i=0; i<N; i++){
	        cin>>v[i];
	    }
	    sort(v, v+N);
	    int min = 10000000;
	    for(int i=0; i<N-1; i++){
	        if(v[i+1]-v[i]<min){
	            min = v[i+1] - v[i];
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
