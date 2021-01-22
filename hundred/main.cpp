#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int alphaToNum(char alpha) {
	int ret(0);
	switch (alpha) {
	case 'a':
		ret = 0;
		break;
	case 'A':
		ret = 0;
		break;
	case 'b':
		ret = 1;
		break;
	case 'B':
		ret = 1;
		break;
	case 'c':
		ret = 2;
		break;
	case 'C':
		ret = 2;
		break;
	case 'd':
		ret = 3;
		break;
	case 'D':
		ret = 3;
		break;
	case 'e':
		ret = 4;
		break;
	case 'E':
		ret = 4;
		break;
	case 'f':
		ret = 5;
		break;
	case 'F':
		ret = 5;
		break;
	case 'g':
		ret = 6;
		break;
	case 'G':
		ret = 6;
		break;
	case 'h':
		ret = 7;
		break;
	case 'H':
		ret = 7;
		break;
	case 'i':
		ret = 8;
		break;
	case 'I':
		ret = 8;
		break;
	case 'j':
		ret = 9;
		break;
	case 'J':
		ret = 9;
		break;
	case 'k':
		ret = 10;
		break;
	case 'K':
		ret = 10;
		break;
	case 'l':
		ret = 11;
		break;
	case 'L':
		ret = 11;
		break;
	case 'm':
		ret = 12;
		break;
	case 'M':
		ret = 12;
		break;
	case 'n':
		ret = 13;
		break;
	case 'N':
		ret = 13;
		break;
	case 'o':
		ret = 14;
		break;
	case 'O':
		ret = 14;
		break;
	case 'p':
		ret = 15;
		break;
	case 'P':
		ret = 15;
		break;
	case 'q':
		ret = 16;
		break;
	case 'Q':
		ret = 16;
		break;
	case 'r':
		ret = 17;
		break;
	case 'R':
		ret = 17;
		break;
	case 's':
		ret = 18;
		break;
	case 'S':
		ret = 18;
		break;
	case 't':
		ret = 19;
		break;
	case 'T':
		ret = 19;
		break;
	case 'u':
		ret = 20;
		break;
	case 'U':
		ret = 20;
		break;
	case 'v':
		ret = 21;
		break;
	case 'V':
		ret = 21;
		break;
	case 'w':
		ret = 22;
		break;
	case 'W':
		ret = 22;
		break;
	case 'x':
		ret = 23;
		break;
	case 'X':
		ret = 23;
		break;
	case 'y':
		ret = 24;
		break;
	case 'Y':
		ret = 24;
		break;
	case 'z':
		ret = 25;
		break;
	case 'Z':
		ret = 25;
		break;
	}
	return ret;
}

char numToAlpha(int num) {
	char ret='A';
	switch (num) {
	case 0:
		ret = 'A';
		break;
	case 1:
		ret = 'B';
		break;
	case 2:
		ret = 'C';
		break;
	case 3:
		ret = 'D';
		break;
	case 4:
		ret = 'E';
		break;
	case 5:
		ret = 'F';
		break;
	case 6:
		ret = 'G';
		break;
	case 7:
		ret = 'H';
		break;
	case 8:
		ret = 'I';
		break;
	case 9:
		ret = 'J';
		break;
	case 10:
		ret = 'K';
		break;
	case 11:
		ret = 'L';
		break;
	case 12:
		ret = 'M';
		break;
	case 13:
		ret = 'N';
		break;
	case 14:
		ret = 'O';
		break;
	case 15:
		ret = 'P';
		break;
	case 16:
		ret = 'Q';
		break;
	case 17:
		ret = 'R';
		break;
	case 18:
		ret = 'S';
		break;
	case 19:
		ret = 'T';
		break;
	case 20:
		ret = 'U';
		break;
	case 21:
		ret = 'V';
		break;
	case 22:
		ret = 'W';
		break;
	case 23:
		ret = 'X';
		break;
	case 24:
		ret = 'Y';
		break;
	case 25:
		ret = 'Z';
		break;
	}
	return ret;
}

struct MAX {
	int num;
	char alpha;
	int check;
};
int main() {
	int arr[26] = { 0 };
	MAX max;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		arr[alphaToNum(str[i])]++;
	}
	max.num = 0;
	max.alpha = 'A';
	max.check = 0;
	for (int i = 0; i < 26; i++) {
		if (max.num < arr[i]) {
			max.alpha = numToAlpha(i);
			max.num = arr[i];
			max.check = 0;
		}
		else if (max.num == arr[i]) {
			max.check = 1;
		}
	}
	
	if (max.check == 1)
		cout << '?' << endl;
	else if (max.check == 0)
		cout << max.alpha << endl;

	return 0;
}