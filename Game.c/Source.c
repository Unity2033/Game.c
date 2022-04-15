#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <windows.h>

int map[10][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,1,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,1,1,1,1,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

void gotoxy(int x, int y)
{
	COORD pos = { x,y }; // x, y ��ǥ ����
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // ��ǥ ��ġ �̵� 
}

void Village()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (map[i][j] == 1)
			{
				printf("��");
			}
			else if (map[i][j] == 0)
			{
				printf("  ");
			}
		}

		printf("\n");
	}
}

int main()
{
	int key;
	int x = 1, y= 1;

	while (1)
	{	
		printf("x�� : %d y : %d\n", x, y);
		Village();

		gotoxy(x, y);
		printf("��");

		key = _getch();

		switch (key)
		{
			case 72: y--;
				break;
			case 75: x--;
				break;
			case 77: x++;
				break;
			case 80: y++;
				break;
			default:
				break;
		}

		// �� ����Ʈ �̵� 
		if (GetAsyncKeyState(VK_BACK))
		{
			system("start https://www.naver.com/");

		}

		// �Ͻ� ���� 
		if (GetAsyncKeyState(VK_RETURN))
		{
			system("pause");
		}

		system("cls");
	}

	return 0;
}






