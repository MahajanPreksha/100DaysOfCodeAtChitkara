#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, K;
	  cin>>N>>K;
	  int ans = 0;
	  if(N%K==0){
	    ans = N/K;
	  }
	  else{
	    ans = (N/K) + 1;
	  }
	  cout<<ans<<endl;
	}
	return 0;
}
