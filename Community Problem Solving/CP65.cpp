#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, X;
	  cin>>N>>X;
	  if(N%2!=0 && X%2==0){
	    cout<<"NO"<<endl;
	  }
	  else{
	    cout<<"YES"<<endl;
	  }
	}
	return 0;
}
