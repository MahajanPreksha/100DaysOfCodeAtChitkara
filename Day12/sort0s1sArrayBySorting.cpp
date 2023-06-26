#include<iostream>
#include<vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &v){
    int zeroes_count = 0;
    for(int ele: v){
        if(ele==0){
            zeroes_count++;
        }
    }

    for(int i=0; i<v.size(); i++){
        if(i<zeroes_count){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        a.push_back(ele);   
    }
    sortZeroesAndOnes(a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
