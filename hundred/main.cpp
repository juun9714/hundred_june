#include <iostream>
using namespace std;
/*
한번에 맞았당 !
*/
int main() {
	int A, B, N;
	cin >> A >> B >> N;
	int Q = 0, R = 0;
	Q = A / B;
	R = A % B;

	for (int i = 0; i < N; i++) {
		R *= 10;
		Q = R / B;
		R = R % B;
		if (R == 0 && i + 1 < N) {
			Q = 0;
			//cout << "Q is zero : " << Q << endl;
			break;
		}
		//cout << "Try "<<i<<": Q is " << Q << ", and R is " << R << endl;
	}
	cout << Q;
	return 0;
}
