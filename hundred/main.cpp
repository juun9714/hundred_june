#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char chess[8][8];
	int check(0);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cin >> chess[i][j];
	}//체스판 위에 말 올려놓기

	/*
	cout << endl;
	cout <<"체스판 출력 시작"<< endl;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout<< chess[i][j];
		cout << endl;
	}//체스판 출력
	cout << "체스판 출력 끝" << endl;
	*/
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0 && chess[i][j]=='F') {
				//짝수행 && 짝수열
				//cout << chess[i][j] << endl;
				check++;
			}
			else if (i % 2 == 1 && j % 2 == 1 && chess[i][j] == 'F') {
				//cout << chess[i][j] << endl;
				check++;
			}
		}
	}//흰 돌 위에 말 있는지 check
	cout << check << endl;
	return 0;
}