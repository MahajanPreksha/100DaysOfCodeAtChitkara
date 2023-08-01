#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, M;
	  cin>>N>>M;
	  if(N==M){
	    cout<<"YES"<<endl;
	  }
	  else if(abs(N-M)%2==0){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
