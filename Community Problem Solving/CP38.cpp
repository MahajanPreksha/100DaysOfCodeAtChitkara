#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    if(A>=B && A>=C){
	        if(B>=C){
	            cout<<A+B<<endl;
	        }
	        else{
	            cout<<A+C<<endl;
	        }
	    }
	    else if(B>=A && B>=C){
	        if(A>=C){
	            cout<<B+A<<endl;
	        }
	        else{
	            cout<<B+C<<endl;
	        }
	    }
	    else{
	        if(A>=B){
	            cout<<C+A<<endl;
	        }
	        else{
	            cout<<C+B<<endl;
	        }
	    }
	}
	return 0;
}
