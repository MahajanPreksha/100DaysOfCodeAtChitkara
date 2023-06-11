#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max = INT_MIN;
    int array[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout<<max;
    return 0;
}