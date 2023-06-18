#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, count = 0;
	  cin>>N;
	  string S;
	  cin>>S;
	  for(int i=0; i<N; i++){
	    if(S[i]=='0'){
	      count++;
	    }
	  }
	  if(count==(N-count)){
	    cout<<N<<endl;
	  }
	  else{
	    cout<<min(count,N-count)*2+1<<endl;
	  }
	}
	return 0;
}
