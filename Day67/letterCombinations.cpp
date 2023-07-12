#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(string& S, int i, string result, vector<string> &li, vector<string> &v){
    if(i==S.size()){
        li.push_back(result);
        return;
    }
    int digit = S[i] - '0';
    if(digit<=1){
        f(S, i+1, result, li, v);
        return;
    }
    for(int j=0; j<v[digit].size(); j++){
        f(S, i+1, result+v[digit][j], li, v);
    }
    return;
}
int main(){
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string S;
    cin>>S;
    vector<string> li;
    f(S, 0, "", li, v);
    for(int i=0; i<li.size(); i++){
        cout<<li[i]<<" ";
    }
    return 0;
}
