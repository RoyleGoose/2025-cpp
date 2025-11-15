#include<stdio.h>

double power(double a, long long n, double& f);

int main(int argc, char** argv)
{
	double a = 0;
	long long n = 0;


	scanf_s("%lf %lld", &a, &n);
	printf("%lf", power(a, n - 1, a));

	return 0;
}

double power(double a, long long n, double& f) {
	if (n == 0) {
		return a;
	}
	if (n > 0) {
		a *= f;
		return power(a, n - 1, f);
	}
	else {
		a /= f;
		return power(a, n + 1, f);
	}
}
