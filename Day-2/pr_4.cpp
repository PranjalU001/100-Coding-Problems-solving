#include <iostream>
#include <cmath>
using namespace std;

int diagonalDifference(int arr[][100], int n) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - i - 1];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main() {
    int n;
    cin >> n;

    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr, n) << endl;
    return 0;
}
