#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*
����ó�� ���־�� �� ��
1. ���ڿ� �Ǿտ��� ����
2. ���ڿ� �ǵڿ��� ����
3. ���ڿ� �Ǿ� �ǵ� ��ο� ���� 1����
4. �ƹ��͵� �Էµ��� �ʾ��� �� 0 ���
5. ���� 1�� ���� �ԷµǾ��� �� 0 ���
*/


int main() {
	string str;
	int idx = 0;
	int num = 0;
	getline(cin, str, '\n');
	//std::cout << "idx is " << idx <<" and str length is "<<str.length()<< endl;
	while (str[idx] == ' ')
		idx++;
	//���ڿ� �ʹ��� ���� ��� ó�� 
	//std::cout << "idx is " << idx << " and str length is " << str.length() << endl;


	while (idx<=str.size()) {
		if (str[idx] == ' ') {
			if (idx+1==str.size()) {
				//std::cout << "�ڿ� ������" << endl;
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