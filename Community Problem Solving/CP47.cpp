#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  string A, B;
	  cin>>A>>B;
	  int flag = 0;
	  for(int i=0; i<A.length(); i++){
	    for(int j=0; j<B.length(); j++){
	       if(A[i]==B[j]){
	         flag = 1;
	         break;
	       }
	    }
	  }
	  if(flag==1){
	    cout<<"Yes"<<endl;
	  }
	  else{
	    cout<<"No"<<endl;
	  }
	}
	return 0;
}
