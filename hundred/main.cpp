#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*
자료형 크기 생각하기
*/

int main() {
	int i(0),num(0);
	long long size(0),cluster(0);
	cin >> num;
	long* files = new long[num];
	for (i = 0; i < num; i++)
		cin >> files[i];
	cin >> size;

	for (i = 0; i < num; i++) {
		if (files[i] % size > 0) {
			//나머지 있음
			cluster += files[i] / size;
			cluster++;
		}
		else if(files[i]%size==0)
			cluster += files[i] / size;

		//cout << "index is " << i << " and cluster size is : " << cluster * size << endl;
	}
	cout << cluster * size << endl;

	return 0;
}