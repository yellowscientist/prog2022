#include <stdio.h>
#include <locale.h>

int main() {
	//настройки
	setlocale(LC_ALL, "rus");
	//вывод
	printf("Hello world! \n");
	//завершение программы 
	system("pause");
	return 0;
}