#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
/*
행기준, 열기준으로 둘다 해야 !!!
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
	//2차원 배열 동적할당


	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cin >> castle[i][j];
		}
	}
	//현재 성 관리원 상태 입력
	

	//행 기준
	for (i = 0; i < a; i++) {
		check_r = 0;
		check_c = 0;
		//check 초기화
		for (j = 0; j < b; j++) {
			if (castle[i][j] == 'X') {
				check_r= 1;
				break;
				//해당 행에 관리원 있으니 더 볼 필요 없음(안쪽 for문 탈출) 
			}
		}

		if (check_r == 1) //i 행에 관리원 있음 -> 다음행 체크
			continue;
		else if (check_r == 0) { //i 행에 관리원 없음 -> i행 중 관리원 없는 열 찾아야 함
			memset(check_bx, 0, sizeof(int) * b);
			for (int k = 0; k < b; k++) {
				//열 기준으로 경비원이 없는 열을 찾아라 (현재 i 행 기준)
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
				//각 열에 모두 경비원 있지만 i행에는 없을 때 -> 그냥 i행 0열에 경비원 둬버려 
			}

		}
	}

	//열기준

	for (j = 0; j < b; j++) {
		check_c = 0;
		//check 초기화
		for (i = 0; i < a; i++) {
			if (castle[i][j] == 'X') {
				check_c = 1;
				break;
				//해당 열에 관리원 있으니 더 볼 필요 없음(안쪽 for문 탈출) 
			}
		}

		if (check_c == 1) //j열에 관리원 있음 -> 다음열 체크
			continue;
		else if (check_c == 0) { //j열에 관리원 없음 -> j열 중 관리원 없는 행 찾아야 함
			memset(check_ax, 0, sizeof(int) * a);
			for (int l = 0; l < a; l++) {
				//행 기준으로 경비원이 없는 행을 찾아라 (현재 j열 기준)
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