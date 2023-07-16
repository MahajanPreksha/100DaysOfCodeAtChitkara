#include <iostream>
using namespace std;

int main() {
	int A, B, X, Y;
	cin>>A>>B>>X>>Y;
	int M = (A * 2) + B, R = (X * 2) + Y;
	if(M>R){
	  cout<<"Messi";
	}
	else if(M==R){
	  cout<<"Equal";
	}
	else{
	  cout<<"Ronaldo";
	}
	return 0;
}
