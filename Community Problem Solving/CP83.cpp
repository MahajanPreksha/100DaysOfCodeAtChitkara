#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A, B, X;
	  cin>>A>>B>>X;
	  int ans = (B - A)/X;
	  cout<<ans<<endl;
	}
	return 0;
}
