#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  if(N==1){
	    cin>>N;
	    cout<<"0"<<endl;
	    continue;
	  }
	  int max_ai = 0;
	  int b_same = 1;
	  int aN;
	  cin>>max_ai;
	  for(int i=1; i<N-1; i++){
	    int ai;
	    cin>>ai;
	    if(ai!=max_ai){
	      b_same = 0;
	      if(ai>max_ai){
	        max_ai=ai;
    	  }
	     }
	   }
	   cin>>aN;
	   if(aN!=max_ai){
	     b_same = 0;
	   }
	   if(b_same){
	     cout<<"0"<<endl;
	   }
	   else{
	     if(aN>=max_ai){
	       cout<<"1"<<endl;
       }
       else{
         cout<<"2"<<endl;    
       }
	    }
	}
	return 0;
}
