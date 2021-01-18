#include <iostream>
using namespace std;
int main() {
    int t,h,w,n,mok,remain,room=0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        mok = n / h;
        remain = n % h;

       if (remain == 0) {
            //6Ãþ
            room = (100*h) + mok;
            cout << room << endl;
        }
        else {
            mok++;
            room = (100 * remain) + mok;
            cout << room << endl;
        }
    }
    return 0;
}