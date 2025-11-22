#include<stdio.h>
#include<string.h>


int main(int argc, char** argv) {
	char s[100] = "";
	char sim = 0;
	int c = 0;

	fgets(s, sizeof(s), stdin);

	for (int g = 0; g < strlen(s) - 2; g++) {
		sim = s[g];
		c = 1;
		for (int k = g + 1; k < strlen(s) - 1; k++) {
			if (s[g] == s[k]) {
				c++;
			}
			if (c > 2) {
				break;
			}
		}
		if (c == 2) {
			break;
		}
	}

	printf("%c", sim);

	return 0;
}