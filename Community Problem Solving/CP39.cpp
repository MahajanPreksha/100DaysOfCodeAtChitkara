#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A,B;
	  cin>>A>>B;
	  if(A%3==0 || B%3==0){
	    cout<<0<<endl;
	  }
	  else if(A%3==B%3){
	    cout<<1<<endl;
	  }
	  else{
	    cout<<2<<endl;
	  }
	}
	return 0;
}
