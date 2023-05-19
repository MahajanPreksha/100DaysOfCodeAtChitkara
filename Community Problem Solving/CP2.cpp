#include <iostream>
using namespace std;

int main() {
	int T, A, B, Burger;
	cin>>T;
	for(int i=1; i<=T; i++){
	  cin>>A>>B;
	  if(A == B){
	    Burger = A;
	  }
	  else if(A<B){
	    Burger = A;
	  }
	  else if(A>B){
	    Burger = B;
	  }
	  cout<<Burger<<endl;
	}
	
	return 0;
}
