#pragma once
#include <string.h>

// �Լ� ������
/*
void Function()
{
	printf("Hello~");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
*/

// main
    // �Լ� ������
	/*
	/*
	// ��ȯ���� �Ű������� ���� �Լ� ������

	// ��ȯ���� �Ű������� ���� �Լ� ������ ptr�� �����մϴ�.
	void (*ptr) ();

	// �Լ� ������ ptr�� Function�� �����ּҸ� ����Ű���� �����մϴ�.
	ptr = Function;

	ptr();


	// ��ȯ���� �Ű������� �ִ� �Լ� ������
	/*
	��ȯ�� (������ ����) (�Ű�����)

	int (*vptr) (int, int);

	vptr = Add;
	printf("Add�Լ��� �� : %d\n", vptr(10, 10));

	vptr = Sub;
	printf("Sub�Լ��� �� : %d", vptr(5, 4));

	// �Լ� ������ �迭
	/*
	int (*fptr[4]) (int, int);

	fptr[0] = Add;
	fptr[1] = Sub;
	fptr[2] = Mul;
	fptr[3] = Div;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", fptr[i](10, 5));
	}
	*/

	// ���μ� 
	/*
	int num1 = 0, num2 = 0;
	int num1_R = 0, num2_R = 0;

	scanf_s("%d   %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			num1_R = num1 / i;
			num2_R = num2 / i;
		}
	}

	printf("���μ� : num1�� %d num2�� %d", num1_R, num2_R);
	*/

	// ���ڿ� �� �Լ�
	/*
	char str[10] = { "Hallo" };
	char str1[10] = { "Hello" };

	printf("%d", memcmp(str, str1, 5));
	*/