#include<cstdio>

int main(int argc, char** argv) {
	int ch;
	int ch1;
	int ch2;
	int ch3;
	int ch4;
	int ch5;
	int ch6;
	scanf_s("%d", &ch);
	ch1 = ch / 100000;
	ch2 = ch / 10000 % 10;
	ch3 = ch / 1000 %10;
	ch4 = ch / 100 %10;
	ch5 = ch / 10 %10;
	ch6 = ch % 10;
	if ((ch1 + ch2 + ch3) == (ch4 + ch5 + ch6)) {
		printf("YES");
	}
	else {
		printf("NO");
	}


	return 0;
}