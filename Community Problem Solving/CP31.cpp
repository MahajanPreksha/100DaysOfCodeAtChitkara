#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
      string S;
      cin>>S;
      int len = S.length();
      set<string> s;
      for(int i=0; i<len-1; i++){
        string str = S.substr(i,2);
        s.insert(str);
      }
      cout<<s.size()<<endl;
    }
	return 0;
}
