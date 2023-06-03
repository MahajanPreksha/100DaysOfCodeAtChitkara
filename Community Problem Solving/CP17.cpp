#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, M;
	  cin>>N>>M;
	  int X, Y;
	  cin>>X>>Y;
	  while(N--){
	    string s;
	    cin>>s;
	    int f = 0, p = 0;
	    for(int i=0; i<s.length(); i++){
	      if(s[i]=='F'){
	        f++;
	      }
	      else if(s[i]=='P'){
	        p++;
	      }
	    }
	    if(f>=X || (f==(X-1) && p>=Y)){
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
