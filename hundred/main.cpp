#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
/*
�����, ���������� �Ѵ� �ؾ� !!!
*/


int main() {
	int a(0), b(0),i(0),j(0),check_r(0),check_c(0),last(0);
	cin >> a >> b;
	char** castle = new char* [a];
	int* check_bx = new int[b];
	int* check_ax = new int[b];
	for (i = 0; i < a; i++) {
		castle[i] = new char[b];
		memset(castle[i], '.', sizeof(a));
	}
	//2���� �迭 �����Ҵ�


	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cin >> castle[i][j];
		}
	}
	//���� �� ������ ���� �Է�
	

	//�� ����
	for (i = 0; i < a; i++) {
		check_r = 0;
		check_c = 0;
		//check �ʱ�ȭ
		for (j = 0; j < b; j++) {
			if (castle[i][j] == 'X') {
				check_r= 1;
				break;
				//�ش� �࿡ ������ ������ �� �� �ʿ� ����(���� for�� Ż��) 
			}
		}

		if (check_r == 1) //i �࿡ ������ ���� -> ������ üũ
			continue;
		else if (check_r == 0) { //i �࿡ ������ ���� -> i�� �� ������ ���� �� ã�ƾ� ��
			memset(check_bx, 0, sizeof(int) * b);
			for (int k = 0; k < b; k++) {
				//�� �������� ������ ���� ���� ã�ƶ� (���� i �� ����)
				for (int l = 0; l < a; l++) {
					if (castle[l][k] == 'X'){
						check_bx[k] = 1;
						break;
					}
				}
			}
			int done(0);
			for (int g = 0; g < b; g++) {
				if (check_bx[g] == 1)
					continue;
				else if (check_bx[g] == 0) {
					castle[i][g] = 'X';
					last++;
					done = 1;
					break;
				}
			}
			if (done == 0) {
				castle[i][0] = 'X';
				last++;
				//�� ���� ��� ���� ������ i�࿡�� ���� �� -> �׳� i�� 0���� ���� �ֹ��� 
			}

		}
	}

	//������

	for (j = 0; j < b; j++) {
		check_c = 0;
		//check �ʱ�ȭ
		for (i = 0; i < a; i++) {
			if (castle[i][j] == 'X') {
				check_c = 1;
				break;
				//�ش� ���� ������ ������ �� �� �ʿ� ����(���� for�� Ż��) 
			}
		}

		if (check_c == 1) //j���� ������ ���� -> ������ üũ
			continue;
		else if (check_c == 0) { //j���� ������ ���� -> j�� �� ������ ���� �� ã�ƾ� ��
			memset(check_ax, 0, sizeof(int) * a);
			for (int l = 0; l < a; l++) {
				//�� �������� ������ ���� ���� ã�ƶ� (���� j�� ����)
				for (int k = 0; k < b; k++) {
					if (castle[l][k] == 'X') {
						check_ax[l] = 1;
						break;
					}
				}
			}
			int done(0);
			for (int g = 0; g < a; g++) {
				if (check_ax[g] == 1)
					continue;
				else if (check_ax[g] == 0) {
					castle[g][j] = 'X';
					done = 1;
					last++;
					break;
				}
			}
			if (done == 0) {
				castle[0][j] = 'X';
				last++;
			}

		}
	}
	/*
	cout << endl;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cout<< castle[i][j];
		}
		cout << endl;
	}
	*/
	cout << last << endl;


	delete[] castle;
	delete[] check_bx;
	delete[] check_ax;
	return 0;
}