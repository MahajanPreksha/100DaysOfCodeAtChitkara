#include <iostream>
#include<string>
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
	    if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
	        count = 0;
	        continue;
	    }
	    else{
	        count++;
	        if(count==4){
	          break;
	        }
	    }
	  }
	  if(count<4){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
