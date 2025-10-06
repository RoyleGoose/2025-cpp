#include<cstdio>

int main(int argc, char** argv) {

	long long k;


	scanf_s("%lld", &k);

	printf("%lld", (k/10) + 1*((k%10)>0));

	return 0;
}