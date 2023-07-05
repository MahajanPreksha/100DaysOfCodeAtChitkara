#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	int arr[3];
	while(T--){
	  for(int &ele:arr){
	    cin>>ele;
	  }
	  sort(arr, arr+3);
	  if(arr[0]+arr[1]==arr[2]){
	    cout<<"YES"<<endl;
	  }
	  else{
	    cout<<"NO"<<endl;
	  }
	}
	return 0;
}
