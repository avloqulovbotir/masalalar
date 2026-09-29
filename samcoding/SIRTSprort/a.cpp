#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int teskari = 0;
    while (n > 0) {
        int raqam = n % 10;
        teskari = teskari * 10 + raqam;
        n = n / 10;
    }
    cout << teskari;
    return 0;
}