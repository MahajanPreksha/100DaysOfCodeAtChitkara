#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, a = 0, b = 0;
	  cin>>N;
	  string S;
	  cin>>S;
	  for(int i=0; i<N; i++){
	    if(S[i]=='0'){
	      a++;
	    }
	  }
	  if(a==(N-a)){
	    cout<<N<<endl;
	  }
	  else{
	    cout<<min(a,N-a)*2+1<<endl;
	  }
	}
	return 0;
}
