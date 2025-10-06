#include<cstdio>

int main(int argc, char** argv)
{
	long long a;

	scanf_s("%lld", &a);
	printf("%lld", (((a+(1*(a%2)))/2)* (((a + (1 * (a % 2))) / 2))));
	return 0;
}
