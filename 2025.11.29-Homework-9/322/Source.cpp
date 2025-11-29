#include<stdio.h>
#include<stdlib.h>

typedef struct {
	long long x;
	long long y;
} Point;

int main(int argc, char** argv) {
	int n = 0;
	long long x = 0;
	long long y = 0;
	int i = 0;

	scanf_s("%d", &n);

	Point* points = (Point*)malloc(sizeof(Point) * n);


	if (points != NULL) {
		for (int g = 0; g < n; g++) {
			scanf_s("%lld %lld", &points[g].x, &points[g].y);
		}
	}

	for (int g = 0; g < n; g++) {
		if ((points[g].x * points[g].x + points[g].y * points[g].y) >= (points[i].x * points[i].x + points[i].y * points[i].y)) {
			i = g;
		}
	}

	printf("%lld %lld", points[i].x, points[i].y);

	free(points);

	return 0;
}