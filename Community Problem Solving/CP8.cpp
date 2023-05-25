#include <iostream>
using namespace std;
int main(){
  int T;
  cin >> T;
  for (int i = 0; i < T; i++){
    double T1, T2, R1, R2;
    cin>>T1>>T2>>R1>>R2;
    if (((T1*T1)/(R1*R1*R1)) == ((T2*T2)/(R2*R2*R2))){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
    return 0;
}
