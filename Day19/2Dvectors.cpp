#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Initialising a 2D Vector
    //Method 1
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5};
    vector<int> v3 = {6,7};
    vector<vector<int>> V = {v1, v2, v3};
    //Method 2
    vector<vector<int>> V(n, vector<int>(m));
    }
