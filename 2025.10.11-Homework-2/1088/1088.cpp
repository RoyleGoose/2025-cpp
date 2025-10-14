#include<cstdio>
#include<cmath>
int main(int argc, char** argv) {

	char x1;
	char x2;
	int y1;
	int y2;
	bool f;

	f = false;

	scanf_s("%c", &x1, 1);
	scanf_s("%d", &y1);
	scanf_s(" %c", &x2, 1);
	scanf_s("%d", &y2);

	if ((abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1)) {
		printf("King\n");
		f = true;
	}
	if ((x1 == x2 || y1 == y2) || (abs(x1 - x2) == abs(y1 - y2))) {
		printf("Queen\n");
		f = true;
	}
	if (x1 == x2 || y1 == y2) {
		printf("Rook\n");
		f = true;
	}
	if (abs(y2 - y1) == abs(x2 - x1)) {
		printf("Bishop\n");
		f = true;
	}
	if (pow(x2 - x1, 2) + pow(y2 - y1, 2) == 5) {
		printf("Knight");
		f = true;
	}
	if (x1 == x2) {
		if ((y1 == 2) && ((y2 - y1) <= 2) && ((y2 - y1) > 0)) {
			printf("Pawn\n");
			f = true;
		}
		else if (((y2 - y1) <= 1) && ((y2 - y1) > 0)) {
			printf("Pawn\n");
			f = true;
		}
	}
	if (f == false) {
		printf("Nobody");
	}



	return 0;
}
