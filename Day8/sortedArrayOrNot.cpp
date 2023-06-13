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
    bool flag = false;
    for(int i=0; i<v.size(); i++){
        if(v[i]>v[i-1]){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}