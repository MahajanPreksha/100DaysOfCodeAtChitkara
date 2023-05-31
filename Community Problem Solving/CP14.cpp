#include <iostream>
using namespace std;

int main(){
  int T;
  cin>>T;
  int Bar, Eibar, RealM, Malaga;
  string team_name;
  while(T--){
    for(int i=1; i<=4; i++){
      cin>>team_name;
      if(team_name == "Barcelona"){
        cin>>Bar;
      }
      else if(team_name=="Eibar"){
        cin>>Eibar;
      }
      else if(team_name=="RealMadrid"){
        cin>>RealM;
      }
      else if(team_name=="Malaga"){
        cin>>Malaga;
      }
    }
      if(Bar>Eibar && RealM<Malaga){
        cout<<"Barcelona"<<endl;
      }
      else{
        cout<<"RealMadrid"<<endl;
      }
  }
	return 0;
}
