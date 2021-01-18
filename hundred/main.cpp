#include <iostream>
using namespace std;
int main() {
    int n,nn;
    cin >> n;
    for (int i = n; i > 0; i--) {
        nn = n - i;
        for (int ii = 0; ii < (2 * i - 1); ii++) {
            if (nn > 0) {
                for (; nn > 0; nn--) {
                    cout << ' ';
                }
            }
            cout << '*';
        }
        cout << endl;
    }
    for (int j = 2; j <= n; j++) {
        nn = n - j;
        for (int jj = 0; jj < (2 * j - 1); jj++) {
            if (nn > 0) {
                for (; nn > 0; nn--) {
                    cout << ' ';
                }
            }
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}