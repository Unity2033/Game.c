#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> // ���ڿ� �Լ��� ����ϱ� ���� ��� �����Դϴ�.
#include <math.h> // ���� ���̺귯�� 

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

// ����ü
//struct Player
//{
//	int x;
//	int y;
//};
//
//struct Monster
//{
//	int x;
//	int y;
//};



int main()
{
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

	// ����ü         
	//struct Player player = { 10, 45 };

	//printf("Player x�� ��ǥ : %d\n", Player.x);
	//printf("Player y�� ��ǥ : %d", Player.y);

	printf("%d", pow(10, 2));

	return 0;
}




