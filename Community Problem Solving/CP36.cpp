#include <iostream>
using namespace std;

int sum(int x){
    return (x*(x+1))/2;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	  int D, N;
	  cin>>D>>N;
	  while(D--){ 
	    N = sum(N);
	  }
	cout<<N<<endl;
	}
	return 0;
}
