#include <iostream>
#include <vector>
using namespace std;
int f(vector<vector<int>>& v, int target){
    int n = v.size(), m = v[0].size();
    int low = 0, high = n*m - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int x = mid/m;
        int y = mid%m;
        if(v[x][y]==target){
            return 1;
        }
        else if(v[x][y]<target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return 0;
}
int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    int target;
    cin>>target;
    int res = f(v, target);
    cout<<res;
    return 0;
}
