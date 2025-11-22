#include<stdio.h>
#include<string.h>


int main(int argc, char** argv) {
	char s[100] = "";
	char p[100] = "";
	char a[100] = "";
	char c = 0;
	int l = 0;

	fgets(s, sizeof(s), stdin);

	s[strcspn(s, "\n")] = 0;

	l = strlen(s);

	if (l % 2 == 0) {
		strncpy_s(p, s, l / 2);
		strncpy_s(a, s, l / 2);
	}
	else {
		strncpy_s(a, s, l / 2 + 1);
		strncpy_s(p, s, l / 2);
	}

	

	for (int g = 0; g < strlen(p) - 1; g++) {
		c = p[strlen(p) - 1 - g];
		p[strlen(p) - 1 - g] = p[g];
		p[g] = c;
	}

	strcat_s(a, p);

	if (strcmp(a, s) == NULL) {
		printf("yes");
	}
	else {
		printf("no");
	}

	



	return 0;
}