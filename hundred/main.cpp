#include <iostream>
using namespace std;
/*
한번에 맞음
*/
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

int main() {
	string str;
	cin >> str;
	int len = str.size();
	int front = 1, back = 1, check = 0;
	if (len == 1) {
		//입력이 한자리 수일 때 항상 NO
		cout << "NO";
		return 0;
	}
	
	//입력이 한자리 수가 아닐 때 
	for (int i = 0; i < len - 1; i++) {
		back = 1;
		front = 1;
		for (int j = 0; j <= i; j++) {
			if (i == 0) {
				front = atoi(str, 0);
				//cout << "front digit is only one and front is " << front << endl;
				break;
			}
			front *= atoi(str, j);
			//cout << "now i and j is " << i <<" "<<j<< " and front is " << front << endl;
		}

		for (int k = i+1; k < len; k++) {
			if (i + 1 == len - 1) {
				back = atoi(str, len - 1);
				//cout << "back digit is only one and front is " << back << endl;
				break;
			}
			back *= atoi(str, k);
			//cout << "now i and k is " << i << " " << k << " and back is " << back << endl;
		}

		//cout << endl;

		if (front == back) {
			check = 1;
			break;
		}
	}
	if (check == 1)
		cout << "YES";
	else if (check == 0)
		cout << "NO";
	return 0;
}
