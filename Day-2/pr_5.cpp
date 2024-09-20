#include <iostream>
using namespace std;

void plusMinus(int arr[], int n) {
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    double positiveRatio = double(positiveCount) / n;
    double negativeRatio = double(negativeCount) / n;
    double zeroRatio = double(zeroCount) / n;

    cout.precision(6);
    cout << fixed << positiveRatio << endl;
    cout << fixed << negativeRatio << endl;
    cout << fixed << zeroRatio << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr, n);
    return 0;
}