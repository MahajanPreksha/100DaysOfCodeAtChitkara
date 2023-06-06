#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int> >&matrix, int l1, int r1, int l2, int r2){
    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum +=matrix[i][j];
        }
    }
    return sum;
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int> > matrix(n, vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = rectangleSum(matrix, l1, r1, l2, r2);
    cout<<sum;
    return 0;
}
