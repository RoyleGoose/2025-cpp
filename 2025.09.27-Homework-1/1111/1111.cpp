#include<cstdio>

int main(int argc, char** argv) {

	long long k;


	scanf_s("%lld", &k);

	printf("%lld", (k % 100)/10);

	return 0;
}