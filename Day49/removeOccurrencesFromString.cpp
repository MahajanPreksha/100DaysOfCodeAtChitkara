#include<iostream>
using namespace std;
string f(string &s, int idx, int n){
    if(idx==n){
        return "";
    }
    string curr = "";
    curr +=s[idx];
    return ((s[idx]=='a')? "":curr) + f(s, idx+1, n);
}
int main(){
    int n;
    string s;
    cin>>s;
    n = s.length();
    string res = f(s, 0, n);
    cout<<res;
    return 0;
}