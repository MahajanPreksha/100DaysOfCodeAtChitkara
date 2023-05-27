#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	  int N,K, count = 0;
	  cin>>N>>K;
	  int H[N];
	  for(int i=0;i<N;i++){
	    cin>>H[i];
	  }
	  for(int i=0;i<N;i++){
	    if(H[i]>K){
	      count++;
	    }
	  }
	  cout<<count<<endl;
	}
	return 0;
}
