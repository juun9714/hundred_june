#include <iostream>
using namespace std;
int sum(int num) {
	int tmp(0);
	for (int i = 0; i <= num; i++) 
		tmp += i;
	return tmp;
}

int main() {
	int n,set,idx,tmp,i(0);
	cin >> n;
	tmp = n;

	while (tmp > 0) {
		i++;
		tmp -= i;
	}
	set = i;
	idx = n - sum(i-1);

	//cout << "n, set, idx is " << n <<' '<< set <<' '<< idx << endl;

	if (set % 2 == 0) {
		//Â¦¼ö set
		cout << idx << '/' << set - idx + 1 << endl;
	}
	else if (set % 2 == 1) {
		//È¦¼ö set
		cout << set - idx + 1 << '/' << idx << endl;
	}
	return 0;
}