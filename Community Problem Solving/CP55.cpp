#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int X;
	  cin>>X;
	  int count = 0;
	  if(X%5!=0){
	    cout<<-1;
	  }
	  else{
	    if(X%10==0){
	      cout<<0;
	    }
	    else{
	      for(int i=0; i<100; i++){
	        X *=2;
	        if(X%10==0){
	          cout<<i+1;
	          break;
	        }
	      }
	    }
	  }
	  cout<<endl;
	}
	return 0;
}
