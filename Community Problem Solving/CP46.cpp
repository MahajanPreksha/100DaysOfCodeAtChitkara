#include <iostream>
#include<vector>
using namespace std;

int main() {
  int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  vector<int> A(N) ;
	  for(int i=0; i<N; i++){
	    cin>>A[i];
	  }
	  int count;
	  for(int i=0; i<N; i++){
	    count=0;
	    for(int j=i+1; j<N; j++){
	      if(A[i]<A[j]){
	        count++;
	      }
	    }
	    cout<<count<<" ";
	  }
	  cout<<endl;
	}
	return 0;
}
