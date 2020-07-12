#include <stdio.h>

int main() {
	double gallons = 0;
	scanf("%lf", &gallons);
	printf("Equivalent of %lf gallons in cubic feet is %lf", gallons, gallons / 7.481);
	return 0;
}