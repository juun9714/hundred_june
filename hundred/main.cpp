#include <iostream>
using namespace std;
/*
실 수 실 수 실 수 그 만 !!!!!
check배열을  check[n][5]로 할당하니까 당연히 틀리지.. !
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
		//학생 i
		for (int j = 0; j < 5; j++) {
			//학생 i가 j학년일 떄
			for (int k = 0; k < n; k++) {
				//학생 i가 j학년일 때, 나머지 학생들(k)이 j학년일 때의 반 
				if (i == k)//같은 학생
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