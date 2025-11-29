#include<stdio.h>
#include<stdlib.h>
#include<cmath>

typedef struct {
	double x;
	double y;
} Point;


double dst(double x1, double y1, double x2, double y2);

int main(int argc, char** argv) {
	int n = 0;
	double x = 0;
	double y = 0;
	double p = 0;
	double d1 = 0;
	double d2 = 0;
	double d3 = 0;



	scanf_s("%d", &n);

	Point* points = (Point*)malloc(sizeof(Point) * n);


	if (points != NULL) {
		for (int g = 0; g < n; g++) {
			scanf_s("%lf %lf", &points[g].x, &points[g].y);
		}
	}

	for (int f = 0; f < n - 2; f++) {
		for (int s = f + 1; s < n - 1; s++) {
			for (int t = s + 1; t < n; t++) {
				d1 = dst(points[f].x, points[f].y, points[s].x, points[s].y);
				d2 = dst(points[f].x, points[f].y, points[t].x, points[t].y);
				d3 = dst(points[t].x, points[t].y, points[s].x, points[s].y);
				if ((d1 + d2 > d3) && (d2 + d3 > d1) && (d1 + d3 > d2)) {
					if (p < (d1 + d2 + d3)) {
						p = d1 + d2 + d3;
					}
				}
			}
		}
	}


	printf("%lf", p);

	free(points);

	return 0;
}


double dst(double x1, double y1, double x2, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}