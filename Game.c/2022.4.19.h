#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <windows.h>

/*
int count = 1; // 스테이지를 관리하는 변수

int num = 0;

const char bar = '='; // 프로그레스바 문자
const char blank = ' '; // 비어있는 프로그레스바 문자

float tick = (float)100 / 20; // 몇 % 마다 프로그레스바를 추가할 지 계산해주는 변수
int bar_count; // 프로그레스바 수를 저장하는 변수
float percent; // 퍼센트 저장 변수

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
	COORD pos = { x,y }; // x, y 좌표 설정
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // 좌표 위치 이동
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
				printf("■");
			}
			else if(map[j][i] == 0)
			{
				printf("  ");
			}
			else if (map[j][i] == 2)
			{
				printf("◎");
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

		printf("\r\t\t  [", num, 100); // 현재 진행 상태
		percent = (float)num / 100 * 100;
		bar_count = percent / tick;

		for (int i = 0; i < 20; i++)
		{
			if (bar_count > i) // 프로그레스바 길이보다 i가 작으면 바를 출력합니다.
			{
				printf("%c", bar);
			}
			else // i가 더 커지면 공백을 출력합니다.
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
		printf("★");

		int key = _getch(); // 키 입력을 받았을 때 key에 값(스캔코드)을 넣습니다.

		switch (key) // key에 저장된 값에 따라 키 입력 처리를 하였습니다.
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