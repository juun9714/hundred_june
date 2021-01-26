#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

void three_Octet(char* bin, int* result, int idx);
void two_Octet(char* bin, int* result, int idx);

int main() {
	string str;
	int q(0), r(0), tmp(0), idx(0), j(0), i(0);
	char bin[4];
	getline(cin, str);
	q = str.size() / 3;
	r = str.size() % 3;
	int* result = new int[q + 1];

	if (q != 0) {
		//���� 1 �̻��� ��� 
		for (i = 0; i < q; i++) {
			tmp = str.size() - (3 * i) - 1;
			idx = 2;
			for (j = tmp; j > (tmp - 3); j--)
				bin[idx--] = str[j];
			three_Octet(bin, result, i);
		}
	}
	//������ ����
	j = r - 1;
	if (r != 0) {
		//�������� �ִ� ��� 
		if (r == 1) {
			//�������� 1�ڸ� 
			if (str[j] == '0')
				result[q] = 0;
			else if (str[j] == '1')
				result[q] = 1;
		}
		else if (r == 2) {
			//�������� 2�ڸ� 
			char tmp[3];
			tmp[1] = str[j];
			tmp[0] = str[j - 1];
			two_Octet(tmp, result, q);
		}
		//������ ���� ��� ���
		for (int k = q; k >= 0; k--) {
			//���� 0 ���� 
			if (k == q && result[k] == 0) {
				while (result[k] == 0)
					k--;
			}
			//��� ���� 0 ������ ���Ŀ��� ����Ұ� �����ִ��� Ȯ�� 
			if (k >= 0)
				cout << result[k];
			else
				cout << 0;
		}
	}
	else if (r == 0)
	{
		//�������� ���� ��� 
		for (int k = q - 1; k >= 0; k--) {
			if (k == q - 1 && result[k] == 0) {
				while (result[k] == 0)
					k--;
			}
			if (k >= 0)
				cout << result[k];
			else
				cout << 0;
		}
	}
	return 0;
}

void three_Octet(char* bin, int* result, int idx) {
	//��
	if (!strncmp(bin, "000", 3))
		result[idx] = 0;
	else if (!strncmp(bin, "001", 3))
		result[idx] = 1;
	else if (!strncmp(bin, "010", 3))
		result[idx] = 2;
	else if (!strncmp(bin, "011", 3))
		result[idx] = 3;
	else if (!strncmp(bin, "100", 3))
		result[idx] = 4;
	else if (!strncmp(bin, "101", 3))
		result[idx] = 5;
	else if (!strncmp(bin, "110", 3))
		result[idx] = 6;
	else if (!strncmp(bin, "111", 3))
		result[idx] = 7;
}

void two_Octet(char* bin, int* result, int idx) {
	//������
	if (!strncmp(bin, "00", 2))
		result[idx] = 0;
	else if (!strncmp(bin, "01", 2))
		result[idx] = 1;
	else if (!strncmp(bin, "10", 2))
		result[idx] = 2;
	else if (!strncmp(bin, "11", 2))
		result[idx] = 3;
}