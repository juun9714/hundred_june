#include <stdio.h>
/*
삽질 삽질 ..
1. overflow를 애초에 일어나지 않게 하기
-> 계속 1의 자리수만 가져가기
2. a가 10의 배수라서 나머지가 0이 될 때 10 출력
-> a가 0이 될 수 없다는 것에 집착하다가 10, 20, 30 등이 될 수 있음을 잊지 말자. . . .
3. 계속 곱해줄 a와 계산의 결과를 저장할 변수 분리 
*/
int main() {
	int n, a, b, aa;
	scanf("%d ", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		aa = a;
		if (a == 1)
			printf("1\n");
		else {
			if (b == 1) {
				if (a % 10 == 0)
					printf("10\n");
				else
					printf("%d\n", a % 10);
			}
			else {
				a = a % 10;
				for (int j = 1; j < b; j++) {
					a = a * aa;
					a = a % 10;
				}
				if (a == 0)
					printf("10\n");
				else
					printf("%d\n", a);
			}
		}
	}
	return 0;
}