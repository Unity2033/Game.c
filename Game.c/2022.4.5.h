#pragma once
#include <stdlib.h> // �����Ҵ��� �ϱ� ���� stdlib.h�� �����ؾ� �մϴ�.
#include <time.h> // �ð� ���� �Լ�

// ���� ������
/*
void Function(char * character ,void * value)
{
	if (character == "int")
	{
		printf("%d", *(int*) value);
	}
	else if (character == "float")
	{
		printf("%f", *(float*)value);
	}
	else if (character == "char")
	{
		printf("%c", *(char*)value);
	}
}
*/

// main

	// ���� ������      
	/*
	void * vptr; // �����ʹ� 4 byte�� ũ�⸦ �����ϴ�.

	char c = 'G';    // 1 byte
	int a = 10;      // 4 byte
	float d = 8.678; // 4 byte

	// vptr -> c�� �����ּҸ� ����ŵ�ϴ�.
	vptr = &c;

	// void �����ͷ� �����ϱ� ���ؼ��� �ڷ��� ��ȯ�� �ʿ��մϴ�.
	printf("c�� �� : %c\n", *(char*)vptr);

	// vptr -> a�� �����ּҸ� ��Ű���ϴ�.
	vptr = &a;
	printf("a�� �� : %d\n", *(int*)vptr);

	// vptr -> d�� �����ּҸ� ����ŵ�ϴ�.
	vptr = &d;
	printf("d�� �� : %f\n", *(float*)vptr);

	int a = 100;
	float b = 5.34;
	char c = 'A';

	Function("char", &c);
	*/

	// ���� �Ҵ� �� ����
	/*
	// malloc �Լ��� byte ũ�⸸ŭ �޸𸮸� ������ �� �ֽ��ϴ�.
	char * ptr = (char *)malloc(5);

	// ptr [0] [1] [2] [3] [4] ���� �Ҵ��� �Ǿ����ϴ�.
	printf("�������� �Ҵ��� �޸��� �ּ� : %p\n", &ptr);

	ptr[0] = 'G';
	ptr[1] = 'K';
	ptr[2] = 'I';
	ptr[3] = 'Q';
	ptr[4] = 'B';

	printf("%c\n", ptr[0]);
	printf("%c\n", ptr[1]);
	printf("%c\n", ptr[2]);
	printf("%c\n", ptr[3]);
	printf("%c\n", ptr[4]);

	// free�Լ��� ���� �Ҵ��� �޸𸮸� �����ϴ� �Լ��Դϴ�.
	free(ptr);


	int data = 5; // ���ÿ� ����Ǿ� �ִ� �޸� ����
	int * value = &data;

	printf("value�� �� : %d", *value);

	// �� ������ �ִ� �޸𸮸� �����ؾ��ϴ� ���ÿ� �ִ� data�� �޸𸮸� �����ϰ� �Ǿ� ������ �߻��մϴ�.
	free(value);
	*/

	// ���� �Լ�
	/*
	int value = 0;

	// 1970�� 1�� 1���� �ð��� �������� ������ ����մϴ�.
	srand(time(NULL));

	// value�� ���� �� �ڸ����� �������� �����մϴ�.
	// value�� ���� 0�� �ȳ����� ������ּ���,

	for (int i = 0; i < 10; i++)
	{
		// rand() : 0 ~ 32767 ������ ������ �����ϴ� �Լ��Դϴ�.
		value = rand() % 10 + 1;

		printf("%d\n", value);
	}
	*/

	// UP - DOWN ����
	/*
	//int value = 0;

	//int life = 5;

	//int input = 0;

	//// �ð��� �����ͼ� �������� �����մϴ�.
	//srand(time(NULL));

	//// 1 ~ 50 ������ ���� ������ �� �ֵ��� �����մϴ�.
	//value = rand() % 50 + 1;

	//while (1)
	//{
	//	printf("��ǻ�Ͱ� ������ �ִ� ���� �Է����ּ���.\n");
	//	scanf_s("%d", &input);
	//	printf("\n");

	//	if (life <= 0)
	//	{
	//		printf("\n��ǻ�Ͱ� ������ �ִ� ���� �˾Ƴ��� ���߽��ϴ�.");
	//		break;
	//	}

	//	if (value == input)
	//	{
	//		printf("\n��ǻ�Ͱ� ������ �ִ� ���� �˾Ƴ½��ϴ�.\n");
	//		break;
	//	}
	//	else if (value > input)
	//	{
	//		printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
	//		life--;
	//	}
	//	else if (value < input)
	//	{
	//		printf("��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.");
	//		life--;
	//	}
	//}
	*/