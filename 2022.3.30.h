#pragma once

// ���� ����
// { } ������ ����� �����̸�, { }�� ����� �޸𸮿��� ������� Ư¡�� �����ϴ�.
/*
void Function()
{
	// Function �Լ���� �������� �����ϰ� �ִ� x ������ �����˴ϴ�.
	int x = 100;
}
*/

// ���� ����
// �Լ� �ܺο��� ����� ������ ��𿡼����� ������ �����ϸ�, ���α׷��� ����Ǿ�߸� �޸𸮿��� ������� Ư¡�� �����ϴ�.
/*
int value = 10;

void Global()
{
	value++;
}
*/

// ���� ����
// ���� ������ ���� ������ Ư¡�� �� ������ �ִ� �����Դϴ�.
/*
void Static()
{
	// ���� ������ �ʱ�ȭ�� ���� ������ 0�̶�� ���� ���ϴ�.
	static int value;
	value++;
	printf("value�� �� : %d\n", value);
	printf("static value�� �ּ� : %p\n", &value);
}
*/

// union
/*
union Block
{
	char a; // 1 byte
	int b;  // 4 byte
	float c; // 4 byte
};
*/

// ���ڿ� ���� �Լ�
/*
char color [10];
char black [6] = { 'B','l','a','c','k' };

strcpy(color, black);

printf("%s", color);
*/

// ���� ����
/*
int x = 3; // main �������� �����ϴ� x �����Դϴ�.

// ���� ����
{
	int x = 10;  // ���ο� �������� �����ϴ� x �����Դϴ�.
}

Function();

printf("x�� �� : %d", x);
*/

// ���� ����
/*
Global();
printf("���� ���� : %d", value);
*/

// ���� ����
/*
Static();
Static();
Static();
*/

// �������� ����
/*
register int value = 100;

printf("%d", value);
*/

// union
/*
union Block block = {'A'};

printf("Block a�� �� : %c\n", block.a);
printf("Block b�� �� : %d\n", block.b);
printf("Block c�� �� : %f\n", block.c);

printf("Block�� ������ : %d", sizeof(block));
*/