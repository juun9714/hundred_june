#include <iostream>
using namespace std;

int check(int n) {
	//num이 2부터 시작하고, n이 되기 전에 while문을 끝내게 해서 1과 자기 자신으로 나누어지지 않도록 하기 
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
	//ret==1 : 소수, ret==0 : 소수 아님 
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
