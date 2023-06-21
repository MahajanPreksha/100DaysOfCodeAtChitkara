#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int x, y, K;
	  cin>>x>>y>>K;
	  if(x%K==0 && y%K==0){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
