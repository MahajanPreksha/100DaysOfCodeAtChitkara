#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cin>>x;
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}