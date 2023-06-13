#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int K, N;
	  cin>>N>>K;
	  if(K==0){
	    if(N%4==0){
	      cout<<"Off"<<endl;
	    }
	    else{
	      cout<<"On"<<endl;
	    }
	  }
	  else{
	    if(N%4==0){
	      cout<<"On"<<endl;
	    }
	    else{
	      cout<<"Ambiguous"<<endl;
	    }
	  }
	}
	return 0;
}
