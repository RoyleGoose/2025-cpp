#include<stdio.h>

#define SIZE 10000

int main(int argc, char** argv) {

	int n = 0;
	int f = 0;
	int m[SIZE] = { 0 };
	int c = 0;

	scanf_s("%d", &n);

	for (int a = 0; a < n; a++) {
		scanf_s("%d", (m + a));
	}

	scanf_s("%d", &f);

	for (int a = 0; a < n; a++) {
		if (f == *(m + a)) {
			c++;
		}
	}

	printf("%d", c);

	return 0;
}