#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  string n;
	  int start_38 = 0, ltime_108 = 0;
	  while(N--){
	    cin>>n;
	    if(n=="START38"){
	      start_38++;
	    }
	    else{
	      ltime_108++;
	    }
	  }
	  cout<<start_38<<" "<<ltime_108<<endl;
	}
	return 0;
}
