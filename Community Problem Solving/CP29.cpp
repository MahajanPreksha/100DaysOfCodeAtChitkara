#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  for(int i=0; i<N; i++){
	    if(i==0 || i==N-1){
	      cout<<1;
	    }
	    else{
	      cout<<0;
	    }
	  }
	  cout<<endl;
	}
	return 0;
}
