#include<stdio.h>

int main(int argc, char** argv) {

	int n = 0;
	int t = 0;
	int a = 0;
	int c = 0;
	int ca = 0;

	scanf_s("%d", &n);
	for (a; a < n; ++a) {
		scanf_s("%d", &t);
		if (t > 0) {
			++c;
			if (c > ca) {
				ca = c;
			}
		}
		else {
			if (c > ca) {
				ca = c;
			}
			c = 0;
		}

	}
	printf("%d", ca);

	return 0;
}