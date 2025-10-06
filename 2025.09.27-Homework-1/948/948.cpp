#include<cstdio>

int main(int argc, char** argv) {

	long long k;
	long long n;

	scanf_s("%lld %lld", &k, &n);

	printf("%lld %lld", (n/k+1*(n%k!=0)), 0 - ((n / k + 1 * (n % k != 0)-1)*k - n));

	return 0;
}