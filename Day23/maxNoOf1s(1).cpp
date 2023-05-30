#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int row = 3, col = 4;
int maximumOnesRow(vector<vector<int>> &V) {
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    for (int i = 0; i < V.size(); i++) {
        for (int j = 0; j < V[i].size(); j++) {
            if (V[i][j] == 1) {
                int numberofOnes = col - j;
                if (numberofOnes > maxOnes) {
                    maxOnes = numberofOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}
int main() {
    vector<vector<int>> V = {{0,1,1,1},{0,0,0,1},{0,0,0,1}};
    int res = maximumOnesRow(V);
    cout << res << endl;
}
