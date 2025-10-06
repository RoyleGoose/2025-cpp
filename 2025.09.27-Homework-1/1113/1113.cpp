#include<cstdio>

int main(int argc, char** argv) {

	long long k;
	long long n;


	scanf_s("%lld %lld", &k, &n);

	printf("%lld", ((n%k)==0) + ((k%n)==0) - (n==k) + 52 * ((k % n) != 0) * ((n % k) != 0));

	return 0;
}