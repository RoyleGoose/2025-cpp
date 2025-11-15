#include<stdio.h>

int Check(long long n);

int main()
{
	long long n = 0;


	scanf_s("%lld", &n);

	if (Check(n) == 1) {
		printf("prime");
	}
	else {
		printf("composite");
	}

	return 0;
}

int Check(long long n) {
	int d = 2;
	while (d * d < n) {
		if (n % d == 0) {
			return 0;
		}
		d++;
	}
	return 1;
}
