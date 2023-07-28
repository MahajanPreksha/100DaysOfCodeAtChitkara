#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D, L, R;
	    cin>>D>>L>>R;
	    if(D>R){
	      cout<<"Too Late"<<endl;
	    }
	    else if(D<L){
	      cout<<"Too Early"<<endl;
	    }
	    else{
	      cout<<"Take second dose now"<<endl;
	    }
	}
	return 0;
}
