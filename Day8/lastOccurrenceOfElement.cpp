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
    int occurrence = -1;
    //Method 1
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurrence = i;
        }
    }
    cout<<occurrence<<endl;
    //Method 2
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            occurrence = i;
            break;
        }
    }
    cout<<occurrence<<endl;
    return 0;
}