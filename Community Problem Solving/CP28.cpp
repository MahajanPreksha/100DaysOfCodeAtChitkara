#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  string S;
	  cin>>S;
	  sort(S.begin(), S.end());
	  string ans = "YES";
	  for(int i=0; i<N; i+=2){
	    if(S[i]!=S[i+1]){
	      ans = "NO";
	      break;
	    }
	  }
	  cout<<ans<<endl;
	}
	return 0;
}
