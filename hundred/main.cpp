#include <iostream>
using namespace std;

int check(int n) {
	//num�� 2���� �����ϰ�, n�� �Ǳ� ���� while���� ������ �ؼ� 1�� �ڱ� �ڽ����� ���������� �ʵ��� �ϱ� 
	int num = 2;
	int ret = 1;
	if (n == 1)
		return 0;

	while (num < n) {
		if (!(n % num)) {
			//cout << "n and num is " << n << " " << num << " and n%num is " << n % num << endl;
			ret = 0;
			break;
		}
		num++;
	}
	return ret;
	//ret==1 : �Ҽ�, ret==0 : �Ҽ� �ƴ� 
}

int main() {
	int n,a,i;
	int sum = 0;
	cin >> n;
	int* arr = new int[n];
	for (i = 0; i < n; i++) 
		cin >> arr[i];

	for (i = 0; i < n; i++) {
		if (check(arr[i])) 
			sum++;
		else
			continue;
	}
	cout << sum;
	
	return 0;
}
