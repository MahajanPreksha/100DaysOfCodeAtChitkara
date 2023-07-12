#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void f(string &S, int i, string result, vector<string> &res){
    if(i==S.length()){
        res.push_back(result);
    }
    f(S, i+1, result+S[i], res);
    f(S, i+1, result, res);
}
int main(){
    string S;
    cin>>S;
    vector<string> res;
    f(S, 0, "", res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i];
    }
    return 0;
}
