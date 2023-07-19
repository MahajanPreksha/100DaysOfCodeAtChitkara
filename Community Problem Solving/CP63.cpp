#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int P, M, V;
	  cin>>P>>M>>V;
	  int EF = M - P + 1;
	  int D = EF * V;
	  cout<<D<<endl;
	}
	return 0;
}
