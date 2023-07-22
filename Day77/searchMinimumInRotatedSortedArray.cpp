#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &v){
    int low = 0, high = v.size() - 1;
    if(v[low]<v[high]){
        return low;
    }
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]>v[mid+1]){
            return mid + 1;
        }
        if(v[mid]<v[mid-1]){
            return mid - 1;
        }
        if(v[mid]>v[low]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<search(v);    
    return 0;
}
