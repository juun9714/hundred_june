#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
대문자도 신경쓰기 
*/
int main() {
	string str;
	int num(0);
	while (1) {
		num = 0;
		getline(cin, str);
		if (!str.compare("#"))
			break;

		for (int i = 0; i < str.size(); i++) {
			switch (str[i]){
			case 'a':
				num++;
				break;
			case 'e':
				num++;
				break;
			case 'i':
				num++;
				break;
			case'o':
				num++;
				break;
			case'u':
				num++;
				break;
			case 'A':
				num++;
				break;
			case 'E':
				num++;
				break;
			case 'I':
				num++;
				break;
			case 'O':
				num++;
				break;
			case 'U':
				num++;
				break;
			}
		}
		cout << num << endl;
		//cout << str << endl;
	}
	return 0;
}