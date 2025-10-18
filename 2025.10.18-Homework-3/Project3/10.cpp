#include<stdio.h>
#include<cmath>

int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;


	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	for (int x = -100; x < 101; ++x) {
		if (a * x * x * x + b * x * x + c * x + d == 0) {
			printf("%d "), x;
		}

	}

	printf("%d", a * 3 * 3 * 3 + b * 3 * 3 + c * 3 + d);

	return 0;
}