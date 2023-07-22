#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &v, int target){
    int low = 0, high = v.size() - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]==target){
            return mid;
        }
        if(v[mid]>v[low]){
            if(target>=v[low] && target<v[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(target>v[mid] && target<=v[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<search(v, target);    
    return 0;
}