#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	  int A, B, C, D;
	  cin>>A>>B>>C>>D;
	  if(A>B){
	    B +=C;
	  }
	  else{
	    A +=C;
    }
    if(A>=B){
      B +=D;
    }
    else{
      A +=D;
    }
    cout<<((A>=B)? 'N':'S')<<endl;
	}
	return 0;
}
