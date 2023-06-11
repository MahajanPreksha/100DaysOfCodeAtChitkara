#include<iostream>
#include<vector>
using namespace std;
int solve(vector<vector<int>> a, int l1, int l2, int r1, int r2){
  int n = a.size(), m = a[0].size();
  for (int j=1; j<m; j++){
      a[0][j] += a[0][j - 1];
  }

  for (int i= ; i<n; i++){
      a[i][0] += a[i - 1][0];
  }

  for (int i=1; i<n; i++){
      for (int j = 1; j < m; j++){
          a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
      }
  }
  int full = a[r2][l2];
  int top = (l1 >= 1 ? a[l1 - 1][r1] : 0);
  int left = (r1 >= 1 ? a[l2][r1 - 1] : 0);
  int double_subtracted = (l1 >= 1 && r1 >= 1 ? a[l1 - 1][r1 - 1] : 0);
  int ans = full - top - left + double_subtracted;
  return ans;
}

int main(){
   int row , col ,l1, l2 , r1 , r2;
   cout<<"Enter number of rows : ";
   cin>>row;
   cout<<"Enter number of columns :";
   cin>>col;
   cout<<"Enter the edges for which you want the prefix sum (in order l1,l2,r1,r2): ";
   cin>>l1>>l2>>r1>>r2;
   vector<vector<int>>arr(row , vector<int>(col));
   cout<<"Enter elements of the array :";
   for(int i=0;i<row;i++){
      for (int j=0;j<col;j++){
         cin>>arr[i][j];
      }
   }
   cout<<"value is : "<<solve(arr,l1,l2,r1,r2)<<endl;
   return 0;
}
