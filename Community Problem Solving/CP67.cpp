#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  long long int N;
	  cin>>N;
	  N = 1 + 8*N;
	  N = sqrt(N);
	  cout<<(N-1)/2<<endl;
	}
	return 0;
}
