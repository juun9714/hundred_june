#include <iostream>
using namespace std;
int young(int n, int* arr) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += (arr[i] / 30) + 1;
	}
	return 10 * num;
}

int min(int n, int* arr) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += (arr[i] / 60) + 1;
	}
	return 15 * num;
}
int main() {

	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (young(n, arr) < min(n, arr))
		cout << "Y " << young(n, arr);
	else if (young(n, arr) > min(n, arr))
		cout << "M " << min(n, arr);
	else
		cout << "Y M " << young(n, arr);
	return 0;
}