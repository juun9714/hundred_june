#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct MAX {
	int freq;
	int idx;
};
int main() {
	int s1, s2, s3;
	MAX max;
	cin >> s1 >> s2 >> s3;
	int arr[81] = { 0 };

	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				//cout << i<<"+"<< j <<"+"<< k <<"="<<i+j+k<< endl;
				arr[i + j + k]++;
			}
		}
	}
	max.freq = arr[3];
	max.idx = 3;
	for (int i = 3; i < 81; i++) {
		if (arr[i] > max.freq) {
			max.freq = arr[i];
			max.idx = i;
		}
		else if (arr[i] == max.freq) {
			if (max.idx > i)
				max.idx = i;
		}
	}


	//cout << "arr[" << max.idx << "] = " << max.freq << endl;
	cout <<max.idx<< endl;

	return 0;
}