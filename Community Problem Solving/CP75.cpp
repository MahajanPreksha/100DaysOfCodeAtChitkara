#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  long long int X, Y;
	  cin>>X>>Y;
	  long long int A = X*X*X*X + 4*Y*Y;
	  long long int B = 4*X*X*Y;
	  if(A==B){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
