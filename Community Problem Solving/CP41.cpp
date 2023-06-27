#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int S, J, diff = 0, count = 0;
	  while(N--){
	    cin>>S>>J;
	    diff = J - S;
	    if(diff>5){
	      count++;
	    }
	  }
	  cout<<count<<endl;
	}
	return 0;
}
