#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
	char s[100] = "";
	int c = 0;
	int m = 0;
	int i = 0;
	int n = 0;

	fgets(s, sizeof(s), stdin);


	s[strcspn(s, "\n")] = 0;

	for (int g = 0; g <= strlen(s); g++) {
		if (s[g] != ' ') {
			if (c == 0) {
				n = g;
			}
			c++;
		}
		else {
			if (c > 0) {
				if (c > m) {
					m = c;
					i = n;
				}
				c = 0;
			}
		}
	}

	for (int g = i; g < i + m; g++) {
		printf("%c", s[g]);
	}
	printf("\n%d", m);

	return 0;
}
