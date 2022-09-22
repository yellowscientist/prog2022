#include <stdio.h>
#include <math.h>

int main() {

	int h, a;
	float square;

	printf("Enter: a,h: \n");
	scanf_s("%d,%d", &a, &h);

	square = (h * a) * 0.5;
	
	printf("Square=%.1f \n", square);

	system("pause");
	return 0;
	
}