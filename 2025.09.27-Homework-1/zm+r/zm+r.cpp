#include<cstdio>
// почему то пропала задачка с остатками 
int main(int argc, char** argv) {

	int a;
	int b;

	scanf_s("%d %d", &a, &b);

	int m = a / b - 1 * (a < 0);
	int s = a / (a / b);
	int o = (a % b) * (a > 0) + ((a % b) + b) * (a < 0);




	printf("%d %d %d", m, s, o);


	return 0;
}