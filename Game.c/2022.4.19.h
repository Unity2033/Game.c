#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <windows.h>

/*
int count = 1; // ���������� �����ϴ� ����

int num = 0;

const char bar = '='; // ���α׷����� ����
const char blank = ' '; // ����ִ� ���α׷����� ����

float tick = (float)100 / 20; // �� % ���� ���α׷����ٸ� �߰��� �� ������ִ� ����
int bar_count; // ���α׷����� ���� �����ϴ� ����
float percent; // �ۼ�Ʈ ���� ����

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
	{1,0,0,0,1,2,0,0,0,1},
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
	{1,0,0,0,0,0,2,1,0,1},
	{1,1,1,1,0,1,1,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int hard[10][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,1,1,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,1,1,0,1,0,1},
	{1,1,0,0,0,0,1,1,0,1},
	{1,0,0,0,0,0,1,1,0,1},
	{1,1,1,1,0,1,1,1,0,1},
	{1,1,0,1,0,1,2,1,0,1},
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
			case First : map[j][i];
				break;
			case Second : map[j][i] = normal[j][i];
				break;
			case Three : map[j][i] = hard[j][i];
				break;
			default :
				exit(1);
			}

			if (map[j][i] == 1)
			{
				printf("��");
			}
			else if(map[j][i] == 0)
			{
				printf("  ");
			}
			else if (map[j][i] == 2)
			{
				printf("��");
			}
		}

		printf("\n");
	}
}


int main()
{
	int x = 2, y = 2;

	while (num <= 100)
	{

		printf("\r\t\t  [", num, 100); // ���� ���� ����
		percent = (float)num / 100 * 100;
		bar_count = percent / tick;

		for (int i = 0; i < 20; i++)
		{
			if (bar_count > i) // ���α׷����� ���̺��� i�� ������ �ٸ� ����մϴ�.
			{
				printf("%c", bar);
			}
			else // i�� �� Ŀ���� ������ ����մϴ�.
			{
				printf("%c", blank);
			}
		}

		printf("] %0.2f%%", percent);

		num += 1;
		Sleep(10);
	}

	system("cls");

	while (1)
	{
		Render();

		gotoxy(x, y);
		printf("��");

		int key = _getch(); // Ű �Է��� �޾��� �� key�� ��(��ĵ�ڵ�)�� �ֽ��ϴ�.

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

		if (map[x / 2][y] == 2)
		{
			x = 2, y = 2;
			system("cls");
			count++;
		}

		system("cls");
	}

	return 0;
}
*/