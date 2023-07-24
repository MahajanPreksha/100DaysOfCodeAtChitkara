#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  string S;
	  cin>>S;
	  int count = 0;
	  for(int i=0; i<S.size(); i++){
	    if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u'){
	      count++;
	      if(count>2){
	        cout<<"HAPPY"<<endl;
	        break;
	      }
	    }
	   else{
	     count = 0;
	   }
	  }
	  if(count<2){
	    cout<<"SAD"<<endl;
	  }
	}
	return 0;
}
