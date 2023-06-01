#include <iostream>
using namespace std;
int main(){
    int num, i, j;
    int f1 = 1, f2 = 1, f3 = 0;
    cout<<"Enter a +ve Integer: ";
    cin>>num;
    i = 3;
    do{
        f1 = 1;
        f2 = 1;
        j = 2;
        do{
            if(i%j== 0){
                f1 = 0;
                j = i;
                }
            j = 2;
            do{
                if((num-i)%j== 0){
                    f2 = 0;
                    j = num - i;
                    }
                j++;
            }while(j<num-i);
            if(f1 == 1 && f2 == 1){
                cout<<num<<" = "<<i<<" + "<<num - i<< endl;
                f3 = 1;
                }
            j++;
        }while(j<i);
        i++;
    }while(i<=num/2);
    if(f3==0){
        cout<<num<<" can not be expressed as a sum of two prime numbers.";
        }
    return 0;
}