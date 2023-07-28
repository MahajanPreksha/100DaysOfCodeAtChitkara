#include<iostream>
#include<vector>
using namespace std;
bool f(vector<int> &v, int m, int mid){
    int studentsReqd = 1;
    int lastPlace = v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i]-lastPlace>=mid){
            studentsReqd++;
            lastPlace = v[i];
            if(studentsReqd==m){
                return true;
            }
        }
    }
    return false;
}
int race(vector<int> &v, int m){
    int n = v.size();
    int low = 1, high = v[n-1] - v[0];
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(f(v, m, mid)){
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
    int m;
    cin>>m;
    int ans = race(v, m);
    cout<<ans;
    return 0;
}
