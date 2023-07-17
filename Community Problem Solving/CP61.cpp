#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int A[N], B[N];
	  for(int i=0; i<N; i++){
	    cin>>B[i];
	  }
	  int sum = 0;
	  for(int i=0; i<N; i++){
	    sum +=B[i];
	  }
	  if(sum%2==0){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
