#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int A[N];
	  for(int i=0; i<N; i++){
	    cin>>A[i];
	  }
	  int count_neg = 0, count_0 = 0;
	  for(int i=0; i<N; i++){
	    if(A[i]<0){
	      count_neg++;
	    }
	    if(A[i]==0){
	      count_0++;
	    }
	   }
	   if(count_0==1){
	     cout<<0<<endl;
	   }
	    else if(count_neg>=1){
	      cout<<count_neg%2<<endl;
	   }
	   else{
	      cout<<0<<endl;
	    }
	}
	return 0;
}
