#include<cstdio>

int main(int argc, char** argv) {

	long long n;
	long long k;


	scanf_s("%lld %lld", &n, &k);

	printf("%lld %lld %lld", k/n, k - n*(k/n), (n - (k - n * (k / n))) * ((k - n * (k / n)) != 0) );

	return 0;
}