#include <iostream>
using namespace std;
//GCD �ִ�����, LCM �ּҰ���� 
int main() {
	int large, small;
	cin >> large >> small;

	if (large < small) {
		int tmp = large;
		large = small;
		small = tmp;
	}
	//ū�� ������ �и� 
	int gcd = small;
	//�ִ� ����� 
	while (1) {
		if (gcd <=1) {
			//1�� �ƴ� �ִ������� ���� ���
			gcd = 1;
			break;
		}else if (large % gcd == 0 && small % gcd == 0) //�ִ����� �߰�
			break;
		else
			gcd--;
			//small�������� �ٿ������� ���� ū ������� ä�õȴ�. 
	}

	int lcm = 1;
	while (1) {
		//lcm�� small�̰ų� (�ּҰ������ �� ���� ���̰ų�), large �Ǵ� large*�ڿ���(<small)�� �ּҰ�����̰ų� 
		if (lcm == small || (large * lcm) % small == 0)
			break;
		else
			lcm++;
	}
	cout << gcd << endl;
	cout<< lcm * large << endl;
	return 0;
}
