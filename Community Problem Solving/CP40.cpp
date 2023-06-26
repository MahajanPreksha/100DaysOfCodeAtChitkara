#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N, K;
	  cin>>N;
	  vector<int> A;
	  for(int i=0; i<N; i++){
	    int ele;
	    cin>>ele;
	    A.push_back(ele);
	  }
	  cin>>K;
	  int newK = A[K-1];
	  sort(A.begin(), A.end());
	  for(int i=0; i<N; i++){
	    if(newK==A[i]){
	      cout<<i+1<<endl;
	      break;
	    }
	  }
	}
	return 0;
}
