#include <iostream>
using namespace std;

int main(){
  int t;
	cin>>t;
	while(t--){
	  string S;
	  cin>>S;
	  string T;
	  cin>>T;
	  int len = 5;
	  for(int i=0; i<len; i++){
	    if(S[i]==T[i]){
	      cout<<'G';
	    }
	    else{
	      cout<<'B';
	    }
	  }
	  cout<<endl;
	}
	return 0;
}
