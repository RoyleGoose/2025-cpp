#include<stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	long long* s = (long long*)malloc(n * sizeof(long long));

	for (int g = 0; g < n; g++) {
		scanf_s("%lld", s + g);
	}
	for (int g = 0; g < n; g+=2) {
		printf("%lld ", *(s + g));
	}

	free(s);
	return 0;
}