#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  string s;
	  cin>>s;
	  int n = s.size();
	  bool flag = false;
	  for(int i=0; i<n; i+=2){
	    if(s[i]=='A'){
	      if(s[i+1]=='A'){
	        flag = true;
	        break;
	      }
	    }
	    else if(s[i]=='B'){
	      if(s[i+1]=='B'){
	        flag = true;
	        break;
	      }
	    }
	   }
	   if(flag==true){
	     cout<<"no"<<endl;
	   }
	   else{
	    cout<<"yes"<<endl;
	   }
	}
	return 0;
}
