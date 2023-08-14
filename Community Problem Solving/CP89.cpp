#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int count = 0;
	  int N;
	  cin>>N;
	  while(N!=50){
	    if(N<50){
	      N +=2;
	      count++;
	    }
	    else{
	      N -=3;
	      count++;
	    }
	  }
	 cout<<count<<endl;
	}
	return 0;
}
