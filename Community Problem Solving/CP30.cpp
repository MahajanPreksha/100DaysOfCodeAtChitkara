#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int X, A, B, C;
	  cin>>X>>A>>B>>C;
    int Arr[3] = {A, B, C};
	  sort(Arr, Arr+3);
	  cout<<(X-1)*Arr[0]+Arr[1] <<endl;
	}
	return 0;
}
