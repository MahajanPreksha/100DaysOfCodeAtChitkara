#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
        int A, B;
        cin>>A>>B;
        int ltotal = 0, btotal = 0;
        int count = 1;
        while ((ltotal <= A) or (btotal <= B)){
            ltotal +=count;
            if (ltotal > A){
              cout<<"Bob"<<endl;
              break;
            }
            count++;
            btotal +=count;
            if (btotal > B){
              cout<<"Limak"<<endl;
              break;
            }
            count++;
        }
    }
    return 0;
}