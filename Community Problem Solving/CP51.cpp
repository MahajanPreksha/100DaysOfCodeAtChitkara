#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A, B, C;
	  cin>>A>>B>>C;
	  int minimum = min(B, C);
	  if(A>=minimum){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
