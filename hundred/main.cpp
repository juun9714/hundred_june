#include <iostream>
using namespace std;
/*
�ڵ��� �� ��԰� �ϱ�..
�׷��� �ѹ��� Ǯ���� !
*/
int main() {
	int from, to;
	cin >> from >> to;
	int* arr = new int[to];
	int value = 1;

	for (int i = 0; i < to;) {
		for (int k = 1; k <= value; k++) {
			arr[i] = value;
			i++;
		}
		value++;
	}

	int sum = 0;
	for (int i = from - 1; i <=to-1; i++)
		sum += arr[i];

	cout << sum;
	return 0;
}
