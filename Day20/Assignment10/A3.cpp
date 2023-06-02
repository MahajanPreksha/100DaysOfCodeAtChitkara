#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[m][n];
        }
    }
    vector<pair<int, int>> res;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==0){
                res.push_back({i,j});
            }
        }
    }
    for(int i=0;i<res.size();i++){
        int x = res[i].first;
        int y = res[i].second;
        int row = 0, col = 0;
        while (row<m){
            mat[row][y] = 0;
            row++;
        }
        while (col<n){
            mat[x][col] = 0;
            col++;
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}