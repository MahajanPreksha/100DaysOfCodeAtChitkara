#include <iostream>
#include <vector>
using namespace std;
int lowerBound(vector<int> &v, int target){
    int low = 0, high = v.size() - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]>=target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int upperBound(vector<int> &v, int target){
    int low = 0, high = v.size() - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]<=target){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
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
    vector<int> res;
    int lower = lowerBound(v, target);
    if(lower==-1 || v[lower]!=target){
        res.push_back(-1);
        res.push_back(-1);
    }
    else{
        int upper = upperBound(v, target);
        res.push_back(lower);
        res.push_back(upper);
    }
    cout<<res[0]<<" "<<res[1];
    return 0;
}
