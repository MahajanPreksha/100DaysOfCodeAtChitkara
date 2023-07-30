#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int prices[] = {2048,1024,512,256,128,64,32,16,8,4,2,1};
	while(T--){
	  int p;
	  cin>>p;
	  int count = 0;
	  for(int i=0; i<12; i++){
	    while(p>=prices[i]){
	      count++;
	      p -=prices[i];
	    }
	  }
	  cout<<count<<endl;
	}
	return 0;
}
