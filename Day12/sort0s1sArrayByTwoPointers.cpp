#include<iostream>
#include<vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &v){
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
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