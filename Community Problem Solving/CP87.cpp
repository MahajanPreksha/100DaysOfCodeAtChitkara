#include <iostream>
#include <climits>
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
	  int maxi = INT_MIN, mini = INT_MAX;
	  int max_idx = INT_MIN, min_idx = INT_MAX;
	  int score = 0;
	  for(int i=0; i<N; i++){
	    if(maxi<A[i]){
	      maxi = A[i];
	      max_idx = i;
	    }
	    if(mini>A[i]){
	      mini = A[i];
	      min_idx = i;
	      maxi = A[i];
	      max_idx = i;
	    }
	    if(max_idx>min_idx){
	      int diff = maxi - mini;
	      score = max(score, diff);
	    }
	  }
	  if(score<=0){
	    cout<<"UNFIT"<<endl;
	  }
	  else{
	    cout<<score<<endl;
	  }
	}
	return 0;
}
