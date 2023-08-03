#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  long long int N, sum = 0;
	  cin>>N;
	  vector<long long> A(N);
	  for(int i=0; i<N; i++){
	    cin>>A[i];
	    sum +=A[i];
	  }
	  if(N==1){
	    cout<<1<<endl;
	    continue;
	  }
	  vector<long long int> pref(N), suff(N);
	  pref[0] = A[0];
	  suff[N-1] = A[N-1];
	  for(int i=1; i<N; i++){
	    pref[i] = gcd(pref[i-1], A[i]);
	    suff[N-i-1] = gcd(suff[N-i], A[N-i-1]);
	  }
	  long long int ans = sum/pref[N-1];
	  for(int i=0; i<N; i++){
	    long long k;
	    if(i==0){
	      k = suff[i+1];
	    }
	    else if(i==(N-1)){
	      k = pref[i-1];
	    }
	    else{
	      k = gcd(pref[i-1], suff[i+1]);
	    }
	    ans = min(ans, (1+(sum-A[i])/k));
	  }
	  cout<<ans<<endl;
	}
	return 0;
}
