#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A, B, C;
	  cin>>A>>B>>C;
	  if(A!=B || B!=C || C!=A){
	    cout<<1<<endl;
	  }
	  else{
	    cout<<0<<endl;
	  }
	}
	return 0;
}
