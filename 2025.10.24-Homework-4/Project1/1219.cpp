#include<stdio.h>

#define SIZE 1000

int main(int argc, char** argv) {
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int m[SIZE] = { 0 };
	int m1[SIZE] = { 0 };
	int m2[SIZE] = { 0 };

	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);

	for (int g = 0; g < n; g++) {
		*(m + g) = g + 1;
	}

	for (int g = 0; g < (b - a + 1); g++) {
		*(m1 + g + a - 1) = *(m + b - g - 1);
	}

	for (int g = 0; g < n; g++) {
		if (*(m1 + g) != 0) {
			*(m + g) = *(m1 + g);
		}
	}

	for (int g = 0; g < n; g++) {
		*(m1 + g) = 0;
	}

	for (int g = 0; g < (d - c + 1); g++) {
		*(m1 + g + c - 1) = *(m + d - g - 1);
	}

	for (int g = 0; g < n; g++) {
		if (*(m1 + g) != 0) {
			*(m + g) = *(m1 + g);
		}
	}

	for (int g = 0; g < n; g++) {
		printf("%d ", *(m + g));
	}

	return 0;
}