#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int X, Y;
	  cin>>X>>Y;
	  int diff = X - Y;
	  if(diff==0){
	    cout<<(2*Y)-1<<endl;
	  }
	  else{
	    cout<<(2*Y)+diff<<endl;
	  }
	}
	return 0;
}
