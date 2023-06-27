#include <iostream>
using namespace std;
long long binomialCoefficient(int n, int k) {
    if(k>n-k){
        k = n - k;
    }
    long long res = 1;
    for(int i=0; i<k; i++){
        res *=(n - i);
        res /=(i + 1);
    }
    return res;
}
long long countSolutions(int n, int val){
    return binomialCoefficient(n + val - 1, val);
}
int main(){
    int n, val;
    cin>>n>>val;
    long long numSolutions = countSolutions(n, val);
    cout<<numSolutions;
    return 0;
}