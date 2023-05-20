#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1; i<=T; i++){
	  int A,B;
	  cin>>A>>B;
	  int a, b;
	  a = A*10;
	  b = B*5;
	  if(a==b){
	    cout<<"ANY"<<endl;
	  }
	  else if(a>b){
	    cout<<"FIRST"<<endl;
	  }
	  else{
	    cout<<"SECOND"<<endl;
	  }
	}
	return 0;
}
