#include<stdio.h>

int main(int argc, char** argv) {
	int n = 0;
	int c = 0;
	int a = 0;
	int b = 1;

	scanf_s("%d", &n);

	if (n == 0) {
		printf("0");
	}
	else if (n == 1) {
		printf("1");
	}
	else {
		while (n - 1 > c) {

			b = b + a;

			a = b - a;

			++c;
		}
		printf("%d", b);
	}



	return 0;
}