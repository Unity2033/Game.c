#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <windows.h>
#include <time.h>

// 숫자 뒤집기 게임
/*
int array[9] = { 0, };
char quest[9] = { '?','?','?','?','?','?','?','?','?'};

int x = 2, y = 2;
int count = 0;
int value = 0;

void gotoxy(int x, int y)
{
	COORD pos = { x,y }; // x, y 좌표 설정
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // 좌표 위치 이동
}

void Init()
{
	srand(time(NULL));

	for (int i = 0; i < 9; i++)
	{
		array[i] = rand() % 9 + 1;

		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
			}
		}
	}
}

void Update()
{
	gotoxy(x, y);
	printf("^");
}

void Render()
{
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		printf("  %d\t", array[i]);

		if (i % 3 == 2)
		{
			printf("\n");
			printf("\n");
			printf("\n");
		}
	}
}

void Quest_Render()
{
	printf("\n");

	for (int i = 0; i <= 9; i++)
	{
		if (quest[i] == '?')
		{
			printf("  %c\t", quest[i]);
		}
		else
		{
			printf("  %d\t", array[i]);
		}

		if (i % 3 == 2)
		{
			printf("\n");
			printf("\n");
			printf("\n");
		}
	}
}

int main()
{
	Init();

	Render();

	Sleep(1000);
	system("cls");

	while (1)
	{
		Quest_Render();
		Update();

		int key = _getch(); // 키 입력을 받았을 때 key에 값(스캔코드)을 넣습니다.

		switch (key) // key에 저장된 값에 따라 키 입력 처리를 하였습니다.
		{
		case 72:
			if (y <= 2) break;
			y -= 3;
			break;
		case 75:
			if (x <= 2) break;
			x -= 8;
			break;
		case 77:
			if (x >= 16) break;
			x += 8;
			break;
		case 80:
			if (y >= 6) break;
			y += 3;
			break;
		case 32:
		{
			value = x + y;

			switch (value)
			{
			case 4:
				count = 0;
				break;
			case 12:
				count = 1;
				break;
			case 20:
				count = 2;
				break;
			case 7:
				count = 3;
				break;
			case 15:
				count = 4;
				break;
			case 23:
				count = 5;
				break;
			case 10:
				count = 6;
				break;
			case 18:
				count = 7;
				break;
			case 26:
				count = 8;
				break;
			}

			quest[count] = 'T';
			break;
		default:
			break;
		}
		}

		system("cls");
	}

	return 0;
}

*/