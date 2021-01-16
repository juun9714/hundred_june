#include <stdio.h>

int main() {
	int n, a, b, aa;
	scanf("%d", &n);

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