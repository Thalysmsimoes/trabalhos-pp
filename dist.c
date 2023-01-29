#include <stdio.h>
#include <math.h>

typedef struct point{
	double X;
	double Y;
} Point;

double distance(Point p1, Point p2)
{
	return sqrt( pow(p1.X - p2.X, 2) + pow(p1.Y - p2.Y, 2) );
}

int main (int argc, char *argv[])
{
	Point p1, p2;

	p1.X = 4; p1.Y = 0;
	p2.X = 0; p2.Y = 3;

	printf("%lf", distance(p1, p2));

	getchar();
	return 0;
}

