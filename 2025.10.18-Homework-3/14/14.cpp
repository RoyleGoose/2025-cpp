#include<stdio.h>

int main(int argc, char** argv) {

	int a = 0;
	int b = 0;
	int c = 1;
	int d = 2;
	int af = 0;
	int bf = 0;

	scanf_s("%d %d", &a, &b);

	af = a;
	bf = b;

	if (af == 1 || bf == 1) {
		if (af >= bf) {
			printf("%d", af);
		}
		else {
			printf("%d", bf);

		}
	}
	else {
		while (c % af != 0 || c % bf != 0) {
			if (a % d == 0 || b % d == 0) {
				c *= d;
				if (a % d == 0) {
					a /= d;
				}
				if (b % d == 0) {
					b /= d;
				}
			}
			else {
				++d;
			}
		}
		printf("%d", c);
	}


	return 0;
}