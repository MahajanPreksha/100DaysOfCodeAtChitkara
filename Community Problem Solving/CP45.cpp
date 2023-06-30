#include <iostream>
using namespace std;

int main() {
  int N, A[5];
	cin>>N;
	while(N--){
	    int count = 0;
	    for(int i=0; i<5; i++){
	        cin>>A[i];
	        if (A[i]==1){
	          count +=A[i];
	        }
	    }
	    if (count==0){
	      cout<<"Beginner";
	    }
	    else if(count==1){
	      cout<<"Junior Developer";
	    }
	    else if (count==2){
	      cout<<"Middle Developer";
	    }
	    else if (count==3){
	      cout<<"Senior Developer";
	    }
	    else if (count==4){
	      cout<<"Hacker";
	    }
	    else{
	      cout<<"Jeff Dean";
	    }
	    cout<<endl;
	}
	return 0;
}
