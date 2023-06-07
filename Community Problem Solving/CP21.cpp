#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  string s;
	  cin>>s;
	  int len = s.length();
	  int flag = 0;
	  for(int i=0; i<floor(len/2); i++){
	    int count = 0, cnt = 0;
	    for(int j=0; j<floor(len/2); j++){
	      if(s[i]==s[j]){
	        count++;
	      }
	    }
	    for(int k=len-1; k>=ceil(len/2); k--){
	      if(s[i]==s[k]){
	        cnt++;
	      }
	    }
	    if(count!=cnt){
	      flag=1;
	      break;
	    }
	  }
	  if(flag==0){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
