#include<stdio.h>

int main() {

	int day,month,year,hourse,minutes,seconds;

	printf("Input data: day,month,year \n");
	scanf_s("%d,%d,%d", &day, &month, &year);
	system("cls");

	printf("Input time: hourse,minutes,seconds\n");
	scanf_s("%d,%d,%d", &hourse, &minutes, &seconds);
	system("cls");

	printf("I'll remember %d.%d.%d %d:%d \nThx, goodbye\n", day, month, year, hourse, minutes);
	system("pause");
	return 0;

}