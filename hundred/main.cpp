#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char chess[8][8];
	int check(0);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cin >> chess[i][j];
	}//ü���� ���� �� �÷�����

	/*
	cout << endl;
	cout <<"ü���� ��� ����"<< endl;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout<< chess[i][j];
		cout << endl;
	}//ü���� ���
	cout << "ü���� ��� ��" << endl;
	*/
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0 && chess[i][j]=='F') {
				//¦���� && ¦����
				//cout << chess[i][j] << endl;
				check++;
			}
			else if (i % 2 == 1 && j % 2 == 1 && chess[i][j] == 'F') {
				//cout << chess[i][j] << endl;
				check++;
			}
		}
	}//�� �� ���� �� �ִ��� check
	cout << check << endl;
	return 0;
}