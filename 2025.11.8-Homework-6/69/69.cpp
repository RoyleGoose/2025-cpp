#include<stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	int n = 0;
	int p = 0;
	scanf_s("%d", &n);
	int* s = (int*)malloc(n * sizeof(int));

	for (int g = 0; g < n; g++) {
		scanf_s("%d", s + g);
	}

	for (int g = 0; g < n / 2; g++) {
		p = *(s + n - g - 1);
		*(s + n - g - 1) = *(s + g);
		*(s + g) = p;
	}

	for (int g = 0; g < n; g++) {
		printf("%d ", *(s + g));
	}


	free(s);
	return 0;
}