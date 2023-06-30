#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, K;
	  cin>>N>>K;
	  cout<<ceil(N/5.0)-ceil(K/5.0)<<endl;
	}
	return 0;
}
