#include <iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	  string t;
	  cin>>t;
	  int count = 0;
	  for(int j=0;j<t.size();j++){
	    if (t[j] == '4'){
	      count++;
	    }
	  }
	  cout<<count<<endl;
	}
	return 0;
}
