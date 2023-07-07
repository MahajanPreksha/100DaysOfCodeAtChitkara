#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A, B, C;
	  cin>>A>>B>>C;
	  if(B>C){
	    B = (B - C);
	    C = 0;
	  }
	  else{
	    C = (C - B);
	    B = 0;
	  }
	  if(A>(B + C)){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
