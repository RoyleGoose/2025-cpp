#include<stdio.h>

#define SIZE 1000

#define ABSOLUTE_MAX 1001
int main(int argc, char** argv) {

	int s[SIZE] = { 0 };
	int max = 0;
	int min = ABSOLUTE_MAX;
	int n = 0;

	scanf_s("%d", &n);

	for (int g = 0; g < n; g++) {
		scanf_s("%d", (s + g));
	}

	for (int g = 0; g < n; g++) {
		if (min > *(s + g)) {
			min = *(s + g);
		}

		if (max < *(s + g)) {
			max = *(s + g);
		}
	}

	for (int g = 0; g < n; g++) {
		if (max == *(s + g)) {
			*(s + g) = min;
		}
	}

	for (int g = 0; g < n; g++) {
		printf("%d ", *(s + g));
	}

	return 0;
}