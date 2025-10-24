#include<stdio.h>

#define SIZE 1001
#define ABSOLUTE_MIN -1001

int main(int argc, char** argv) {

	int s[SIZE] = { 0 };
	int n = 0;
	int l = 0;
	int r = 0;
	int m = ABSOLUTE_MIN;
	int i = 0;

	scanf_s("%d", &n);

	for (int g = 0; g < n; g++) {
		scanf_s("%d", (s + g));
	}

	scanf_s("%d", &l);
	scanf_s("%d", &r);

	for (int g = 0; g < (r - l + 1); g++) {
		if (m < *(s + g + l - 1)) {
			m = *(s + g + l - 1);
			i = g + l;
		}
	}

	printf("%d %d", m, i);

	return 0;
}