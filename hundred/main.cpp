#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*
예외처리 해주어야 할 것
1. 문자열 맨앞에만 공백
2. 문자열 맨뒤에만 공백
3. 문자열 맨앞 맨뒤 모두에 공백 1개씩
4. 아무것도 입력되지 않았을 때 0 출력
5. 공백 1개 딸랑 입력되었을 때 0 출력
*/


int main() {
	string str;
	int idx = 0;
	int num = 0;
	getline(cin, str, '\n');
	//std::cout << "idx is " << idx <<" and str length is "<<str.length()<< endl;
	while (str[idx] == ' ')
		idx++;
	//문자열 초반의 공백 모두 처리 
	//std::cout << "idx is " << idx << " and str length is " << str.length() << endl;


	while (idx<=str.size()) {
		if (str[idx] == ' ') {
			if (idx+1==str.size()) {
				//std::cout << "뒤에 공백임" << endl;
				break;
			}
			else {
				num++;
				//std::cout << "num increased " << num << " idx is " << idx << endl;
				idx++;
			}
		}
		else {
			//std::cout << "num is not increased " << num << " idx is " << idx << endl;
			idx++;
		}
	}
	if (str.length() == 0)
		cout << '0' << endl;
	else if (str.length() == 1 && str[0] == ' ')
		cout << '0' << endl;
	else {
		num++;
		std::cout << num << std::endl;
	}
	return 0;
}