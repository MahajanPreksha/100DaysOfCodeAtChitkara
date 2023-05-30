#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;
  for(int i=0; i<T; i++){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++){
      cin>>d[i];
    }
    int count = 0;
	  for(int i = 0; i<n; i++){
	    for(int j = i + 1; j<n; j++){
	      if(d[i]==d[j]){
	        d[i]=0;
	          }
	       }
	    }    
	  for(int i = 0; i<n; i++){
	    if(d[i]!=0)
	      count++;
	    }
	  cout<<count<<endl;
  }
	return 0;
}
