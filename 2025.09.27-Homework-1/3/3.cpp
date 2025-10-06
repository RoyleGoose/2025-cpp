#include<cstdio>

int main(int argc, char** argv) {

	/*long long k;


	scanf_s("%lld", &k);

	printf("%lld", k *k);*/

	// если следовать алгоритму 

	long long k;


	scanf_s("%lld", &k);

	printf("%lld", k/10*(k/10+1)*100+25);

	return 0;
}