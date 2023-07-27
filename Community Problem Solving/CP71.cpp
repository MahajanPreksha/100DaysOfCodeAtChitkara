#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int H[N];
	  for(int i=0; i<N; i++){
	    cin>>H[i];
	  }
	  sort(H, H+N);
	  int ans = 0;
	  if(N==1){
	    cout<<H[0]<<endl;
	    continue;
	  }
	  for(int i=0; i<N; i++){
	    int j = i, count = 0;
	    while(i<N && H[i]==H[j]){
	      i++, count++;
	    }
	    ans = max(ans, H[j]+count-1);
	  }
	  cout<<ans<<endl;
	}
	return 0;
}
