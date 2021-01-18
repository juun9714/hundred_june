#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, sum;
    sum = 0;
    cin >> n;
    char* str = new char[n + 1];
    cin >> str;
    for (int i = 0; i < n; i++) {
        switch(str[i]){
        case '0':
            sum += 0;
            break;
        case '1':
            sum += 1;
            break;
        case '2':
            sum += 2;
            break;
        case '3':
            sum += 3;
            break;
        case '4':
            sum += 4;
            break;
        case '5':
            sum += 5;
            break;
        case '6':
            sum += 6;
            break;
        case '7':
            sum += 7;
            break;
        case '8':
            sum += 8;
            break;
        case '9':
            sum += 9;
            break;
        }
    }
    cout << sum << endl;
    return 0;
}