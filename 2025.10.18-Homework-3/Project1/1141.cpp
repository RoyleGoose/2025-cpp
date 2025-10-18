#include<stdio.h>

int main(int argc, char** argv) {

	int n = 0;
	int m = 0;
	int m2 = 0;
	int m3 = 0;

	do {
		scanf_s("%d", &n);

		if (n > m) {
			m2 = m;
			m = n;
		}
		else if (n > m2) {
			m2 = n;
		}

	} while (n != 0);


	printf("%d", m2);

	return 0;
}