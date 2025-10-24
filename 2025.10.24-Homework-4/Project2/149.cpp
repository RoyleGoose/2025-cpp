#include<stdio.h>

#define SIZE 1000

int main(int argc, char** argv) {

	int n = 0;
	int m[SIZE] = { 0 };

	scanf_s("%d", &n);

	for (int g = 0; g < n; g++) {
		scanf_s("%d", (m + g));
	}

	for (int g = 0; g < n; g++) {
		printf("%d ", *(m + n - g - 1));
	}


	return 0;
}