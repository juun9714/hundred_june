#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main() {
	int N, m, M, T, R,low, total(0),work(0);
	cin >> N >> m >> M >> T >> R;
	low = m;

	if (m + T > M)
		cout << "-1" << endl;
	else {
		while (1) {
			if (work >= N)
				break;
			else {
				if (m + T <= M) {
					//���� �ƹ�<=�ְ� �ƹ� -> �
					m += T;
					work++;
					total++;
					//cout << "1�� � �Ϸ�, �� �ɸ� �ð� ���� " << total << " ���� �ƹ� " << m << endl;
				}
				else if (m + T > M) {
					//���� �ƹ�>�ְ� �ƹ� -> �޽� �ʿ�
					if (m - R > low)
						m -= R;
					else
						m = low;
					total++;
					//cout << "1�� �޽� �Ϸ�, �� �ɸ� �ð� ���� " << total << " ���� �ƹ� " << m << endl;
				}
			}
		}
		//cout << "work out time : " << work << " total time : " << total << endl;
		cout << total << endl;
	}
	return 0;
}