#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int N, K;
	cin>>N>>K;
	long long int v[N];
	for(int i=0; i<N;i++){
	  cin>>v[i];
	}
	if(K==0){
	  K = 0;
	}
	else if(K%2==0){
	  K = 2;
	}
	else{
	  K = 1;
	}
	for(int i=0; i<K; i++){
	  long long b=*max_element(v, v+N);
	  for(int j=0; j<N; j++){
	    v[j] = b - v[j];
	  } 
  }
  for(int i=0; i<N; i++){
    cout<<v[i]<<" ";
  }
	return 0;
}
