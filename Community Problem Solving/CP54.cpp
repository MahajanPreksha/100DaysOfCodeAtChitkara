#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int temp = N;
	  int rev = 0;
	  while(temp!=0){
	    int rem = temp%10;
	    rev = rev*10 + rem;
	    temp/=10;
	  }
	  if(N==rev){
	    cout<<"wins"<<endl;
	  }
	  else{
	    cout<<"loses"<<endl;
	  }
	}
	return 0;
}
