#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int A, B, C, D, count = 0;
	  cin>>A>>B>>C>>D;
	  int mini = min(A, C);
	  int maxi = max(B, D);
	  for(int i=mini; i<=maxi; i++){
	    if(i>=A && i<=B || i>=C && i<=D){
	      count++;
	    }
	  }
	  cout<<count<<endl;
	}
	return 0;
}
