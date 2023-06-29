#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, X;
	  cin>>N>>X;
	  int ans = 2*N - X + 1;
	  cout<<ans<<endl;
	}
	return 0;
}
