#include<stdio.h>

int main(int argc, char** argv) {

	float x = 0;
	float y = 0;
	int d = 1;

	scanf_s("%f %f", &x, &y);

	if (y <= 0 || x <= 0) {
		printf("1");
	}
	else if (x >= y) {
		printf("1");
	}
	else {
		while (x < y) {
			x = x * 1.15;
			++d;
		}
		printf("%d", d);

	}

	return 0;
}