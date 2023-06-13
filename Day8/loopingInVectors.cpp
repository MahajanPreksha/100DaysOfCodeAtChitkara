#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //for loop
    for(int i=0; i<v.size(); i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<endl;
    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    //while loop
    int i = 0;
    while(i<v.size()){
        cout<<v[i++]<<" ";
    }
    return 0;
}
