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
	  int half = (N/2);
	  int flag;
	  for(int i=0; i<half; ++i){
	    if(S[i]==S[i+half]){
	      flag = 1;
	    }
	    else{
	      flag = 0;
	      break;
	    }
	  }
	  if(flag==1){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
  }
  return 0;
}
