#include <iostream>
using namespace std;
int main(){
    int T, N, C;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> N;
        int A[N];
        int B[N];
        C = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }
        for (int j = 0; j < N; j++)
        {
            cin >> B[j];
        }
        for (int j = 0; j < N; j++)
        {
            if (j == 0)
            {
                if (A[j] >= B[j])
                    C += 1;
            }
            else
            {
                if ((A[j] - A[j - 1]) >= B[j])
                    C += 1;
            }
        }
        cout << C << endl;
    }
    return 0;
}