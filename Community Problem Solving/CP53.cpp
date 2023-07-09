#include <iostream>
#include<algorithm>
using namespace std;

int main() {
  int T;
	cin>>T;
	while(T--){
	    int N, K;
	    cin>>N>>K;
	    double A[N];
	    for(int i=0; i<N; i++){
	        cin>>A[i];
	    }
	    sort(A, A+N);
	    double total = 0.0000000;
	    for(int i=K; i<=N-K-1; i++){
	        total +=A[i];
	    }
	    double ans = 0.0000000;
	    ans = total/(N-(2*K));
	    cout<<fixed<<ans<<endl;
	}
	return 0;
}
