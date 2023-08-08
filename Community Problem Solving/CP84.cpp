#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A[10];
	  for(int i=0; i<10; i++){
	    cin>>A[i];
	  }
	  int odd_count = 0, even_count = 0;
	  for(int i=0; i<10; i++){
	    if(i%2==0 && A[i]==1){
	      even_count++;
	    }
	    else{
	      if(A[i]==1){
	        odd_count++;
	      }
	    }
	  }
	  if(odd_count==even_count){
	    cout<<0<<endl;
	  }
	  else if(odd_count>even_count){
	    cout<<2<<endl;
	  }
	  else{
	    cout<<1<<endl;
	  }
	}
	return 0;
}
