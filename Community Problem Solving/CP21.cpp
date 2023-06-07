#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int   T,c1,c2;
	cin>>T;
	while(T--){
	  string s;
	  cin>>s;
	  float l = s.length();
	  int flag = 0;
	  for(int i=0; i<floor(l/2); i++){
	    c1 = c2 = 0;
	    for(int j=0; j<floor(l/2); j++){
	      if(s[i]==s[j])
	        c1++;
	    }
	    for(int k=l-1; k>=ceil(l/2); k--){
	      if(s[i]==s[k])
	        c2++;
	    }
	    if(c1!=c2){
	      flag=1;
	      break;
	    }
	  }
	  if(flag==0)
	    cout<<"YES"<<endl;
	  else
	    cout<<"NO"<<endl;
	}
	return 0;
}
