#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int count = 0, c = 0;
	  int A[N];
	  for(int i=0; i<N; i++){
	    cin>>A[i];
	  }
	  for(int j=0; j<N-1; j++){
	    if(A[j]!=A[j+1]){
	      count +=2;
	    }
	  } 
	  for(int i=1; i<N-1; i++){
	    if(A[i]!=A[i-1] && A[i]!=A[i+1]){
	      c++;
	    }
	  }
	  cout<<count-c<<endl;
	}
	return 0;
}
