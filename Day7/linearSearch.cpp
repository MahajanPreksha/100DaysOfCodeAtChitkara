#include<iostream>
using namespace std;
int main(){
    int key;
    cin>>key;
    int N;
    cin>>N;
    int array[N];
    for(int i=0; i<N; i++){
        cin>>array[i];
    }
    int ans = -1;
    for(int i=0; i<N; i++){
        if(array[i]==key){
            ans = i;
            break;
        }
    }
    cout<<ans;
    return 0;
}