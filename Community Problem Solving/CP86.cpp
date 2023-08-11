#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  string S;
	  cin>>S;
	  int count = 0;
	  for(int i=0; i<N; i++){
	    if(S[i]=='5' || S[i]=='0'){
	      count++;
	    }
	  }
	  if(count>=1){
	    cout<<"Yes"<<endl;
	  }
	  else{
	    cout<<"No"<<endl;
	  }
	}
	return 0;
}
