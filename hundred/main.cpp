#include <iostream>
using namespace std;
//GCD 최대공약수, LCM 최소공배수 
int main() {
	int large, small;
	cin >> large >> small;

	if (large < small) {
		int tmp = large;
		large = small;
		small = tmp;
	}
	//큰수 작은수 분리 
	int gcd = small;
	//최대 공약수 
	while (1) {
		if (gcd <=1) {
			//1이 아닌 최대공약수가 없는 경우
			gcd = 1;
			break;
		}else if (large % gcd == 0 && small % gcd == 0) //최대공약수 발견
			break;
		else
			gcd--;
			//small에서부터 줄여나가야 가장 큰 공약수가 채택된다. 
	}

	int lcm = 1;
	while (1) {
		//lcm이 small이거나 (최소공배수가 두 수의 곱이거나), large 또는 large*자연수(<small)가 최소공배수이거나 
		if (lcm == small || (large * lcm) % small == 0)
			break;
		else
			lcm++;
	}
	cout << gcd << endl;
	cout<< lcm * large << endl;
	return 0;
}
