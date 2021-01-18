#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 1;
    cin >> n;
    if (n == 0 || n==1)
        cout << sum << endl;
    else {
        for (int i = n; i > 0; i--) {
            sum *= i;
        }
        cout << sum << endl;
    }
    return 0;
}