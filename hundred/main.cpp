#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
/*
�ܼ��ϰ� �����ϱ� �� �� �� �� �� ��
*/

int main() {
	int n(0), start(0),inc(1),tmp(0);
	cin >> n;
	if (n == 1)
		cout << 1<<endl;
	else {
		for (int i = 1;; i++) {
			//i�� end���� �������� ��
			tmp = (6 * start) + 2;
			if (n >= tmp && n < tmp + (6 * i)) {
				cout <<i+1<< endl;
				break;
			}
			else {
				start += inc;
				inc++;
			}
		}
	}
	return 0;
}
