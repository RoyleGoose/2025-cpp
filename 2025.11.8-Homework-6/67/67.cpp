#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	long long* s = (long long*)malloc(n * sizeof(long long));

	for (int g = 0; g < n; g++) {
		scanf_s("%lld", s + g);
	}
	for (int g = 0; g < n - 1; g++) {
		if ((*(s + g) < 0) && (*(s + g + 1) < 0)) {
			printf("YES");
			free(s);
			return 0;
		}
		else if ((*(s + g) > 0) && (*(s + g + 1) > 0)) {
			printf("YES");
			free(s);
			return 0;
		}
	}
	printf("NO");

	free(s);
	return 0;
}