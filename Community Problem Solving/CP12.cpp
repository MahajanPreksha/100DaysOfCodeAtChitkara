#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    int sum = A+B;
	    int lastDig = 0 , count = 0;
	    int arr[10] = {6,2,5,5,4,5,6,3,7,6};
	    while(sum>0){
	        lastDig = sum%10;
	        count = count + arr[lastDig];
	        sum = sum/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
