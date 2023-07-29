#include <iostream>
using namespace std;

int main() {
  while(true){
    int n;
    cin>>n;
    if(n==0){
      break;
    }
    int A[n+1], B[n+1];
    for(int i=1; i<=n; i++){
      int ele;
      cin>>ele;
      A[i] = ele;
      B[ele] = i;
    }
    bool flag = true;
    for(int i=1; i<=n; i++){
      if(B[i]!=A[i]){
        flag = false;
        break;
      }
    }
    if(flag==true){
      cout<<"ambiguous"<<endl;
    }
    else{
      cout<<"not ambiguous"<<endl;
    }
  }
  return 0;
}
