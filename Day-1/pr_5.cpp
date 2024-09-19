#include <iostream>
using namespace std;

void compareTriplets(int a[3], int b[3], int &aliceScore, int &bobScore) {
    aliceScore = 0;
    bobScore = 0;
    
    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            aliceScore++;
        } else if (a[i] < b[i]) {
            bobScore++;
        }
    }
}

int main() {
    int a[3];
    int b[3];
    int aliceScore, bobScore;
    
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    }
    
    compareTriplets(a, b, aliceScore, bobScore);
    cout << aliceScore << " " << bobScore << endl;
    
    return 0;
}