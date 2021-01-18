#include <iostream>
using namespace std;
int main() {
    int arr[4];
    int min;
    //0:x, 1:y, 2:w, 3:h
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    arr[2] = arr[2] - arr[0];
    arr[3] = arr[3] - arr[1];
    min = arr[0];
    for (int i = 0; i < 4; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min << endl;
    return 0;
}