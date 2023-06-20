#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    k = k%v.size(); //k can be greater than n
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin())+k;
    reverse(v.begin()+k, v.end());
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}