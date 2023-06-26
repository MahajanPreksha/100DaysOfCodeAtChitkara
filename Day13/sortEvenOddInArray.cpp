#include<iostream>
#include<vector>
using namespace std;
void sortEvenAndOdd(vector<int> &v){
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            int temp = v[left_ptr];
            v[left_ptr] = v[right_ptr];
            v[right_ptr] = temp;
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2!=0){
            right_ptr--;
        }
    }
    return;
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
    sortEvenAndOdd(a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
