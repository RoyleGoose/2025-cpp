#include<cstdio>
#include<cmath>

int main(int argc, char** argv) {
	int a;
	int b;
	int c;

	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 0 && b!= 0 && c!=0) {
		if (c > 0) {
			printf("%dx+%dy", b, c);
		}
		else {
			printf("%dx-%dy", b, abs(c));
		}
	}
	else if (b == 0 && a != 0 && c != 0) {
		if (c > 0) {
			printf("%d+%dy", a, c);
		}
		else {
			printf("%d-%dy", a, abs(c));
		}
	}
	else if (c == 0 && a != 0 && c != b) {
		if (c > 0) {
			printf("%d+%dx", a, b);
		}
		else {
			printf("%d-%dx", a, abs(b));
		}
	}
	else {
		if (b > 0 && c > 0) {
			printf("%d + %dx + %dy", a, b, c);
		}
		else if (b > 0 && c < 0) {
			printf("%d+%dx-%dy", a, b, abs(c));
		}
		else if (b < 0 && c>0) {
			printf("%d - %dx + %dy", a, abs(b), c);
		}
		else {
			printf("%d - %dx - %dy", a, abs(b), abs(c));
		}
	}

	return 0;
}