#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void Move(int x, int y)
{
	// x,y ��ǥ ����
	COORD position = {x,y};

	// Ŀ���� �̵��ϴ� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	// �ߺ��� �Ǵ� ����
	/*
	int value = 0;
	
	// time(NULL) : 1970�� 1�� 1�� ���Ŀ� ����� �ð��� �� ������ ��ȯ�ϴ� �Լ��Դϴ�.
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		// rand() : 0 ~ 32767�� ���� ��ȯ�ϴ� �Լ��Դϴ�.
		value = rand() % 10 + 1;
		printf("%d\n", value);
	}
	*/

	// �ߺ����� �ʴ� ����
	/*
	int array[10] = { 0, };

	for(int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;

		for (int j = 0; j < i; j++)
		{
			if (array[j] == array[i])
			{
				i--;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	// ���� ����
	/*
	FILE * file = fopen("file.txt", "w");

	fputs("flie\n", file);
	fputs("1000 won\n", file);

	fclose(file);
	*/

	// ���� �б�
	/*
	char buffer[10000] = { 0, }; // ������ ���� �� ����� �ӽ� �����̸�, 0���� �ʱ�ȭ�մϴ�.

	FILE * file = fopen("Cat.txt", "r");

	// buffer = char �迭
	// 10000 = �о���� ������ ũ��� ������ ����Ʈ�̸�, size�� 4 �̸� �ϳ��� ������ ũ��� 4 ����Ʈ�̴�.
    // 1 = ũ�⸦ ������ �迭�� ����Ű�� ������ 
	// file = �����͸� �Է¹��� ��Ʈ���� FILE ��ü�� ����Ű�� ������

	fread(buffer, 1,sizeof(buffer), file); 

	printf("%s", buffer);

	fclose(file);
	*/

	int x = 5;
	int y = 5;

	// ����ȭ : ���� �۾����� �Ѿ�� ���� ���� �ϰ� �ִ� �۾��� �� ������ ���� �۾����� �Ѿ �� �ִ� ���Դϴ�.
	// �񵿱�ȭ : ���� �۾����� �Ѿ�� ���� ���� �ϰ� �ִ� �۾� �̿ܿ� �ٸ� �۾��� �ϸ鼭 �Ѿ �� �ִ� ���Դϴ�.

	while (1)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			y--;
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
		}

		system("cls");
		Move(x, y);
		printf("��");
	}

	return 0;
}