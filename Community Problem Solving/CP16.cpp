#include <iostream>
#include<vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int N;
	  cin>>N;
	  int A[N], B[N];
	  for(int i=0; i<N; i++){
	    cin>>A[i];
	  }
	  for(int i=0; i<N; i++){
	    cin>>B[i];
	  }
	  vector<int> Streak;
	  int value = 0;
	  for(int i=0; i<N; i++){
	    if(A[i]!=0 && B[i]!=0){
	      value++;
	    }
	    else{
	      Streak.push_back(value);
	      value = 0;
	    }
	  }
	  Streak.push_back(value);
	  int maxStreak = 0;
	  for(int i=0; i<Streak.size(); i++){
	        maxStreak = max(maxStreak, Streak.at(i));
	    }
	  cout<<maxStreak<<endl;
	}
	return 0;
}
