#pragma once

// void : �ڷ����� �������� �ʱ� ������ ��ȯ�� �� �����ϴ�.
/*
//void Function(int value, int x)
//{
//	value = value + 4;
//	printf("%d\n", value);
//}
*/

// �Լ��� ������ Ÿ��
/*
int Plus(int x, int y);
void Sub(int x, int y);
void Mul(int x, int y);
float Div(int x, int y);
*/

// main �Լ�

// ��� ���� ������ 
/*
int value = 10;

// ��� ���� ������ : �����ͷ� �����ؼ� ���� ������ �� ������ ���ȭ�ϴ� ���Դϴ�.
const int * ptr = &value;

// value��� ���� �����ϱ� ���ؼ��� ptr �����Ͱ� ��� ���� �������̱� ������ �ش� ������ ���� �޸𸮸� �����ؾ��մϴ�.
value = 63;

printf("%d\n", value);
*/

// �Լ�
/*
printf("Plus : %d\n",Plus(10, 5));

Sub(20,10);

Mul(1, 3);

float f = Div(3, 2);
printf("Div : %f", f);
*/

// return 

// �Լ�
/*
// ��ȯ�� - �Լ��̸�(�Ű����� x, �Ű����� y)
int Plus(int x, int y)
{
	return x + y;
}

// ���� ���� �̸��� �Լ��� ������ �� �����ϴ�.
void Sub(int x, int y)
{
	printf("Sub : %d\n", x - y);
}

void Mul(int x, int y)
{
	printf("Mul : %d\n", x * y);
}

float Div(int x, int y)
{
	return (float)x / y;
}
*/