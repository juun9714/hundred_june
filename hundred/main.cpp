#include <iostream>
#include <math.h>
#include <stack>
#include <queue>
#include <string>
using namespace std;

/*
맞았는데 돌아돌아 가는 느낌.. 
stack 안쓰고 string data type만 써서 해보기
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
	string x, y,result;
	cin >> x >> y;
	stack<int> X;
	stack<int> Y;
	int revX = 0, revY = 0;

	for (int i = 0; i < x.size(); i++) {
		X.push(atoi(x, i));
		//cout << "x[" << i << "] is " << x[i] << endl;
	}

	for (int i = 0; i < y.size(); i++) {
		Y.push(atoi(y, i));
		//cout << "y[" << i << "] is " << y[i] << endl;
	}
	//cout << "X.size(): " << X.size() << endl;
	//cout << "Y.size(): " << Y.size() << endl;

	int sizeX = X.size();
	int sizeY = Y.size();

	for (int i = 0; i < sizeX; i++) {
		if (X.top() == 0) {
			X.pop();
			continue;
		}
		else {
			revX += X.top() * pow(10.0, X.size()-1);
			X.pop();
		}
	}

	for (int i = 0; i < sizeY; i++) {
		if (Y.top() == 0) {
			Y.pop();
			continue;
		}
		else {
			revY += Y.top() * pow(10.0, Y.size() - 1);
			Y.pop();
		}
	}

	//cout << "X.size(): " << X.size()<<" and revX is "<<revX<< endl;
	//cout << "Y.size(): " << Y.size()<<" and revY is " << revY<< endl;
	result = to_string(revX + revY);
	//cout << result << endl;
	for (int i = 0; i < result.size(); i++) {
		X.push(atoi(result, i));
		//cout << "result[" << i << "] is " <<result[i] << endl;
	}
	revX = 0;
	sizeX = X.size();
	for (int i = 0; i < sizeX; i++) {
		if (X.top() == 0) {
			X.pop();
			continue;
		}
		else {
			revX += X.top() * pow(10.0, X.size() - 1);
			X.pop();
		}
	}
	cout << revX;
	
	return 0;
}
