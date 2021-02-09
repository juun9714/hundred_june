#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	stack <int> s;
	queue <int> q;
	string str;
	int check = 0;
	while (1) {
		cin >> str;
		if (str == "0")
			break;

		for (int i = 0; i < str.size(); i++) {
			switch (str[i]) {
			case '0':
				s.push(0);
				q.push(0);
				break;
			case '1':
				s.push(1);
				q.push(1);
				break;
			case '2':
				s.push(2);
				q.push(2);
				break;
			case '3':
				s.push(3);
				q.push(3);
				break;
			case '4':
				s.push(4);
				q.push(4);
				break;
			case '5':
				s.push(5);
				q.push(5);
				break;
			case '6':
				s.push(6);
				q.push(6);
				break;
			case '7':
				s.push(7);
				q.push(7);
				break;
			case '8':
				s.push(8);
				q.push(8);
				break;
			case '9':
				s.push(9);
				q.push(9);
				break;
			}
		}

		int j;
		for (j = 0; j < str.size(); j++) {
			if (s.top() == q.front()) {
				check = 1;
				s.pop();
				q.pop();
			}
			else {
				check = 0;
				break;
			}
		}

		if (check == 1)
			cout << "yes" << endl;
		else if (check == 0)
			cout << "no" << endl;

		//stack, queue, str ºñ¿ì±â
		for (int p = 0; p < str.size() - j; p++) {
			s.pop();
			q.pop();
		}
		str.clear();
	}
	return 0;
}
