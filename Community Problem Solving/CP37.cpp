#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int L, R;
	  cin>>L>>R;
	  int count = 0;
	  for(int i=L; i<=R; i++){
	    int num = i;
	    if(num%10==2 || num%10==3 || num%10==9){
	      count++;
	    }
	    num /=10;
	  }
	  cout<<count<<endl;
	}
	return 0;
}
