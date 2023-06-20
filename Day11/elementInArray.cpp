#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> array(n);
    for(int &ele:array){
        cin>>ele;
    }
    const int N = 1e5 + 10;
    vector<int> freq(N,0);
    for(int i=0; i<n; i++){
        freq[array[i]]++;
    }
    int queries;
    cin>>queries;
    while(queries--){
        int qEle;
        cin>>qEle;
        cout<<freq[qEle]<<endl;
    }
    return 0;
}