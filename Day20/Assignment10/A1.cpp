#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int max = -100000000;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]>max){
                max = mat[i][j];
            }
        }
    }
    cout<<max;
    return 0;
}
