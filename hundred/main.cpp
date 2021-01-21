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
					//현재 맥박<=최고 맥박 -> 운동
					m += T;
					work++;
					total++;
					//cout << "1분 운동 완료, 총 걸린 시간 현재 " << total << " 현재 맥박 " << m << endl;
				}
				else if (m + T > M) {
					//현재 맥박>최고 맥박 -> 휴식 필요
					if (m - R > low)
						m -= R;
					else
						m = low;
					total++;
					//cout << "1분 휴식 완료, 총 걸린 시간 현재 " << total << " 현재 맥박 " << m << endl;
				}
			}
		}
		//cout << "work out time : " << work << " total time : " << total << endl;
		cout << total << endl;
	}
	return 0;
}