#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int>V(N);
	    for(int i=0; i<N; i++) {
	      cin>>V[i];
	    }
	    for(int i=0; i<N; i++){
	        for(int j=i+1; j<N; j++){
	            if(V[i]==V[j]){
	              V[i] = V[j] = -1;
	            }
	        }
	    }
	    for(int i=0; i<N; i++){
	        if(V[i]>0){
	          cout<<V[i]<<endl;
	        }
	    }
	}
	return 0;
}
