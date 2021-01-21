#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

long long toNum(char ch) {
	long long res(0);
	switch (ch) {
	case '0':
		res = 0;
		break;
	case '1':
		res = 1;
		break;
	case '2':
		res = 2;
		break;
	case '3':
		res = 3;
		break;
	case '4':
		res = 4;
		break;
	case '5':
		res = 5;
		break;
	case '6':
		res = 6;
		break;
	case '7':
		res = 7;
		break;
	case '8':
		res = 8;
		break;
	case '9':
		res = 9;
		break;
	}
	return res;
}

/*
<주의>
1. string 마지막 null 자리 
2. 10000자리 * 10000자리 혹시 몰라서 longlong

*/

int main() {
	char a[10001];
	char b[10001];
	long long sum(0);
	cin >> a >> b;
	//cout << strlen(a) << ' ' << strlen(b) << endl;
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(b); j++) {
			sum += toNum(a[i]) * toNum(b[j]);
			//cout << "sum : "<<sum<<" = "<< toNum(a[i]) << '*' << toNum(b[j]) << endl;
		}
	}
	cout << sum << endl;
	return 0;
}