#include <iostream>
using namespace std;
/*
�� �� �� �� �� �� �� �� !!!!!
check�迭��  check[n][5]�� �Ҵ��ϴϱ� �翬�� Ʋ����.. !
*/
int main() {
	int n;
	cin >> n;
	int** check = new int* [n];
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[5];
		check[i] = new int[n];
	}

	for (int j = 0; j < n; j++) {
		for(int k=0;k<5;k++)
			cin >> arr[j][k];
	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++)
			check[j][k] = 0;
	}

	//check
	for (int i = 0; i < n; i++) {
		//�л� i
		for (int j = 0; j < 5; j++) {
			//�л� i�� j�г��� ��
			for (int k = 0; k < n; k++) {
				//�л� i�� j�г��� ��, ������ �л���(k)�� j�г��� ���� �� 
				if (i == k)//���� �л�
					continue;
				else if (arr[i][j] == arr[k][j])
					check[i][k]=1;
			}
		}
	}
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n; k++)
			cout << check[j][k] << ' ';
		cout << endl;
	}


	int* cnt = new int[n];
	for (int k = 0; k < n; k++)
		cnt[k] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cnt[i] += check[i][j];
	}

	int max = 0;
	int idx = 0;
	for (int i = 0; i < n; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			idx = i;
		}
	}
	cout << idx + 1 << endl;

	delete[] check;
	delete[] arr;
	delete[] cnt;
	return 0;
}


/*
4
1 1 1 1 1
1 1 1 2 2
2 2 1 1 1
2 2 2 2 2
*/