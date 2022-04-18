#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <windows.h>

int count = 2; 

enum Stage 
{
	First = 1, 
	Second, 
	Three
};

int map[10][10] = 
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,1,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,1,0,0,0,0,0,0,1},
	{1,1,1,1,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,1,1,1,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int normal[10][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,1,1,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,1,1,1,1,0,1},
	{1,1,1,0,0,0,0,1,0,1},
	{1,0,0,0,0,0,0,1,0,1},
	{1,1,1,1,0,1,1,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

void gotoxy(int x, int y)
{
	COORD pos = { x,y }; // x, y ��ǥ ����
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // ��ǥ ��ġ �̵� 
}

void Render() 
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) 
		{
			switch (count)
			{
			case First:
				map[j][i];
				break;
			case Second : map[j][i] = normal[j][i];
				break;
			case Three:		
				break;
			}

			if (map[j][i] == 1)
			{				
				printf("��");
			}
			else if(map[j][i] == 0)
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
    int x = 2, y= 2;

	while (1)
	{	
		switch (count)
		{
		    case First :
				Render();
				break;
			case Second:
				Render();
				break;
			case Three:
				Render();
				break;
		}

		gotoxy(x, y);
		printf("��");

		key = _getch(); // Ű �Է��� �޾��� �� key�� ��(��ĵ�ڵ�)�� �ֽ��ϴ�.

		switch (key) // key�� ����� ���� ���� Ű �Է� ó���� �Ͽ����ϴ�.
		{
			case 72 :
				if (map[x / 2][y-1] == 1) break; 
				 y--;		 
				break;
			case 75 : 
				if (map[x / 2 - 1][y] == 1) break; 
				x -= 2;
				break;
			case 77 : 
				if (map[x / 2 + 1][y] == 1)	break;			
                x += 2; 
				break; 
			case 80 : 
				if (map[x / 2][y + 1] == 1) break;
				y++; 
				break;
			default:
				break;
		}

		system("cls");
	}

	return 0;
}






