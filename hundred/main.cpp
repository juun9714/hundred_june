#include <iostream>
using namespace std;

/*
int atoi(string str, int i) {
	switch (str[i]) {
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}
}
*/


/*
https://m.blog.naver.com/PostView.nhn?blogId=occidere&logNo=220876138317&proxyReferer=https:%2F%2Fwww.google.com%2F
참고 했음 .. 어렵다 DP문제 
*/

int main() {
	int a,n,m;
	cin>> a;
	int i = 0, j = 0, k = 0;

	for (int aa = 0; aa < a; aa++) {
		cin >> n >> m;
		int bridge[30][30] = { 0 };
		for (i = 1; i <= 30; i++)
			bridge[1][i] = i;
		//기초재료

		for (i = 2; i <= n; i++) {
			for (j = i; j <= m; j++) {
				for (k = j; k >= i; k--)
					bridge[i][j] += bridge[i - 1][k - 1];
			}
		}

		cout << bridge[n][m] << endl;
	}
	return 0;
}
