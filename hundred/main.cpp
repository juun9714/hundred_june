#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[10] = { 0 };
	int n,tmp=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++)
			cin >> arr[j];

		for (int p = 0; p < 10; p++) {
			for (int q = 0; q < 9; q++) {
				if (arr[q] > arr[q + 1])
					swap(arr[q], arr[q + 1]);
			}
		}
		cout << arr[7] << endl;
	}
	
	return 0;
}
