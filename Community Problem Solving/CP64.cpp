#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, X;
	  cin>>N>>X;
	  int A[N];
	  int count = 0;
	  for(int i=1; i<=N; i++){
	    cin>>A[i];
	    if(A[i]<X){
	      count = i;
	    }
	  }
	  cout<<count<<endl;
	}
	return 0;
}
