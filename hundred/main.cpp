#include <iostream>
#include <cstring>
using namespace std;
struct valGop {
	long long val;
	long long gop;
};
valGop colorVal(char* color) {
	valGop res;
	if (!strncmp(color, "black", 5)) {
		res.val = 0;
		res.gop = 1;
	}
	else if (!strncmp(color, "brown", 5)) {
		res.val = 1;
		res.gop = 10;
	}
	else if (!strncmp(color, "red", 3)) {
		res.val = 2;
		res.gop = 100;
	}
	else if (!strncmp(color, "orange", 6)) {
		res.val = 3;
		res.gop = 1000;
	}
	else if (!strncmp(color, "yellow", 6)) {
		res.val = 4;
		res.gop = 10000;
	}
	else if (!strncmp(color, "green", 5)) {
		res.val = 5;
		res.gop = 100000;
	}
	else if (!strncmp(color, "blue", 4)) {
		res.val = 6;
		res.gop = 1000000;
	}
	else if (!strncmp(color, "violet", 6)) {
		res.val = 7;
		res.gop = 10000000;
	}
	else if (!strncmp(color, "grey", 4)) {
		res.val = 8;
		res.gop = 100000000;
	}
	else if(!strncmp(color, "white", 5)) {
		res.val = 9;
		res.gop = 1000000000;
	}

	return res;
}

int main() {
	long long om=0;
	valGop ret;
	char color[7] = { '\0' };
	cin >> color;
	ret=colorVal(color);
	om += 10 * ret.val;

	cin >> color;
	ret = colorVal(color);
	om += ret.val;

	cin >> color;
	ret = colorVal(color);
	om *= ret.gop;

	cout << om << endl;
	
	return 0;
}