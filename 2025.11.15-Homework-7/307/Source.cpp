#include<stdio.h>

int double_power(double a, int n);

int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;

	scanf_s("%lf %d", &a, &n);

	printf("%lf", double_power(a, n));

	return 0;
}

int double_power(double a, int n) {
	int s = 1;
	for (int g = 0; g < n; g++) {
		s *= a;
	}
	return s;
}
