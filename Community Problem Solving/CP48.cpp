#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int L = 0, CL = 0, W;
	while(T--){
	    int S, t;
	    cin>>S>>t;
	    int diff = S - t;
	    CL +=diff;
	    if(abs(CL)>L){
	        L = abs(CL);
	        if(CL>0){
	          W = 1;
	        }
	        else{
	          W = 2;
	        }
	    }
	}
	cout<<W<<" "<<L<<endl;
	return 0;
}
