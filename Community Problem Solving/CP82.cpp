#include <iostream>
#include<string>
using namespace std;

int main() {
	int N, H, x;
	cin>>N>>H>>x;
	int T[N];
	string ans = "NO";
	for(int i=0; i<N; i++){
	    cin>>T[i];
	    if(x+T[i]>=H){
	      ans = "YES";
	    }
	}
	cout<<ans;
	return 0;
}
