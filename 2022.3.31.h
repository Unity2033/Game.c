#pragma once
#include <math.h> // ���� �Լ��� ����ϱ� ���� ���̺귯��

// �� �� ������ �Ÿ�
/*
struct Character
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};
*/

// ����ü
/*
struct Data
{
	char character; // 1 byte
	int integer;    // 4 byte
	float value;    // 4 byte
};
*/

// �ڱ� ���� ����ü
/*
struct Bus
{
	char array[10];
	int value;
	struct Bus * Next; // �ڱ� �ڽ��� ������ �� �ֵ��� ������ ������ �����մϴ�.
};
*/

// ����ü  
/*
	// ����ü�� ������ ���� �� �޸� ������ ������ �˴ϴ�.
	struct Data data;

	// ��� ������ (.)�� ���ؼ� ����ü ����� �ִ� �����Ϳ� �����ؼ� ���� �ʱ�ȭ�� �� �ֽ��ϴ�.

	data.character = 'a';
	data.integer = 10;
	data.value = 88.56;

	printf("Data�� character : %c\n", data.character);
	printf("Data�� interger : %d\n", data.integer);
	printf("Data�� value : %f", data.value);
	*/

// �� �� ������ �Ÿ� 
/*
	// Character�� Monster ����ü�� �����ϰ� x, y�� ���� �ʱ�ȭ�մϴ�.
	struct Character wizard = { 0, 0 };
	struct Monster Orc = { 2, 3 };

	// ��Ÿ����� ������ �̿��ؼ� wizard�� ��ǥ���� Orc�� ��ǥ���� ���� ���� ������ �մϴ�.
	int X_Distance = pow(wizard.x - Orc.x,2);
	int Y_Distance = pow(wizard.y - Orc.y,2);

	// float��� ������ �����ؼ� �� X_Distance + Y_Distance ����մϴ�.
	float result = sqrt(X_Distance + Y_Distance);

	printf("���Ϳ� ������ �Ÿ� : %f", result);
	*/

// �ڱ� ���� ����ü
/*
	struct Bus A = { 10, "A ������",NULL};
	struct Bus B = { 20, "B ������",NULL };
	struct Bus C = { 30, "C ������",NULL };

	// A��� ����ü�� ��� ������ ����ü �����ʹ� B��� ����ü�� �����ּҸ� ����ŵ�ϴ�.
	A.Next = &B;

	// B��� ����ü�� ��� ������ ����ü �����ʹ� C��� ����ü�� �����ּҸ� ����ŵ�ϴ�.
	B.Next = &C;

	// �� �̻� ����ų �ּҰ� ���ٸ� NULL�� �����մϴ�.
	C.Next = NULL;

	printf("A�� value : %d\n", A.value);

	// A.Next�� ���� �ּҸ� ����ų �� �ֱ� ������ -> �� B�� ��� ������ ���� ������ �� �ֽ��ϴ�.
	printf("B�� value : %d\n", A.Next->value = 1000);
	printf("B�� value : %s\n", A.Next->array);


	printf("C�� value : %d", B.Next->value);
	*/