#include <stdio.h>
#include <locale.h>

int main() {
	//���������
	setlocale(LC_ALL, "rus");
	//�����
	printf("Hello world! \n");
	//���������� ��������� 
	system("pause");
	return 0;
}