#include <stdio.h>

// ����ü ����Ʈ �е�
/*
struct value
{
	char a; // 1 byte 
	char b; // 1 byte
	char c; // 1 byte
};

// CPU�� ������ �� �� 4 ����Ʈ�� �дµ� �������� �ʰ� �ϱ� ���� 4 / 4 / 4 �� �е��� �߰��մϴ�.
struct Data
{
	// k�� 1 byte������, CPU�� ���� �� �ѹ��� ���� �� �ֵ��� 3 byte�� �е��� �߰��� �Ǿ����ϴ�.
	// m�� 1 byte������, CPU�� ���� �� �ѹ��� ���� �� �ֵ��� 3 byte�� �е��� �߰��� �Ǿ����ϴ�.

	// [k][pa][pa][pa] / [i][i][i][i] / [m][pa][pa][pa]

	int i;  // 4 byte 
	char k; // 1 byte + padding 3 byte
	char m; // 1 byte + padding 3 byte 

	// [i][i][i][i] 
	// [k][m][pa][pa]
    
	// ����ü�� ũ��� ��� ������ ������ ���� ũ�Ⱑ �޶����ϴ�.
};
*/

// ��Ʈ �ʵ�
/*
struct Bit 
{
	char x; // 1 byte
	char y; // 1 byte
};

struct Byte
{
	// ��Ʈ �ʵ带 ����� �� ������ �̸��� �����ؼ� ����� �� �ֽ��ϴ�.

	char h : 3; // 1 byte  [] [] []
	char n : 2; // 1 byte     [] []

    // [n] [h] [h] [h] [h] [h] [h] [h]
	// [ ] [ ] [ ] [ ] [ ] [ ] [n] [n] 
};
*/

// ����ü 
/*
enum Map
{
   Village,
   Battle,
   Sea,
   Heaven,
};
*/

int main()
{
    // ����ü ����Ʈ �е�
	/*
	printf("����ü value�� ũ�� : %d\n", sizeof(struct value));
	printf("����ü Data�� ũ�� : %d\n", sizeof(struct Data));
	*/

	// ��Ʈ �ʵ�
	/*
	printf("Bit ����ü�� ũ�� : %d\n", sizeof(struct Bit));
	printf("Byte ����ü�� ũ�� : %d\n", sizeof(struct Byte));
	*/

	// ���
	/*
	int value = 0;

	scanf_s("%d", &value);

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			printf("value�� ��� : %d\n", i);
		}
	}
	*/

	// ����ü
    /*
	// while���� �̿��ؼ� ���� ���ϴ� ��ȣ�� ������ ���ϴ� ��ġ�� �̵��� �� �ֵ��� ����� ������.

	enum Map number = 0;
	int value = 0;

	while (1)	
	{
		printf("0.����  1.������  2.�ٴ�  3.��Ȱ ����");
		scanf_s("%d", &value);

		number = value;

		switch (number)
		{
		case Village:
			printf("������ �����߽��ϴ�.\n");
			break;
		case Battle:
			printf("�����忡 �����߽��ϴ�.\n");
			break;
		case Sea:
			printf("�ٴٿ� �����߽��ϴ�.\n");
			break;
		case Heaven:
			printf("��Ȱ ������ �����߽��ϴ�.\n");
			break;
		default:
			printf("�ٽ� �Է����ּ���.\n");
			break;
		}
		
	}
	*/
	
	return 0;
}




