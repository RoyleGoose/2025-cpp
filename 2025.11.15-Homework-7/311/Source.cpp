#include<stdio.h>

long long Power(long long a, int n);

int main(int argc, char** argv) {
	long long a = 0;
	int n = 0;

	scanf_s("%lld %d", &a, &n);
	printf("%lld", Power(a, n));


	return 0;
}

long long Power(long long a, int n) {
	
	long long r = 1;
	long long f = a;
	
	if (n == 0) {
		return 1;
	}

	while (n > 0) {
		printf("1");
		if (n % 2 == 1) {
			r *= f;
		}

		f *= f;
		n /= 2;
	}

	return r;
}

