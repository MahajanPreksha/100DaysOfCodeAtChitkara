#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
      int N;
      cin>>N;
      map<int, int> mp;
      for(int i=0; i<N; i++){
        cin >> arr[i];
        mp[arr[i]]++;
      }
    int ans = 0;
    for(auto i : mp){
        ans = max(ans, i.first + i.second - 1);
    }
    cout<<ans<<endl;    
    }
    return 0;
}
