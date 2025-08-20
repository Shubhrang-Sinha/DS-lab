#include <iostream>
using namespace std;

void transpose(int A[][3], int B[][3], int n) {
    for (int i = 0; i < n; i++) {
        B[i][0] = A[i][1];
        B[i][1] = A[i][0];
        B[i][2] = A[i][2];
    }
}

int main() {
    int n;
    cin >> n;
    int A[20][3], B[20][3];
    for (int i = 0; i < n; i++)
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    transpose(A, B, n);
    for (int i = 0; i < n; i++)
        cout << B[i][0] << " " << B[i][1] << " " << B[i][2] << endl;
}