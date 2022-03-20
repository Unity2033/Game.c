#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void Move(int x, int y)
{
	// x,y 좌표 설정
	COORD position = {x,y};

	// 커서를 이동하는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	// 중복이 되는 난수
	/*
	int value = 0;
	
	// time(NULL) : 1970년 1월 1일 이후에 경과된 시간을 초 단위로 반환하는 함수입니다.
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		// rand() : 0 ~ 32767의 수를 반환하는 함수입니다.
		value = rand() % 10 + 1;
		printf("%d\n", value);
	}
	*/

	// 중복되지 않는 난수
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

	// 파일 쓰기
	/*
	FILE * file = fopen("file.txt", "w");

	fputs("flie\n", file);
	fputs("1000 won\n", file);

	fclose(file);
	*/

	// 파일 읽기
	/*
	char buffer[10000] = { 0, }; // 파일을 읽을 때 사용할 임시 공간이며, 0으로 초기화합니다.

	FILE * file = fopen("Cat.txt", "r");

	// buffer = char 배열
	// 10000 = 읽어들일 원소의 크기로 단위는 바이트이며, size가 4 이면 하나의 원소의 크기는 4 바이트이다.
    // 1 = 크기를 가지는 배열을 가리키는 포인터 
	// file = 데이터를 입력받을 스트림의 FILE 객체를 가리키는 포인터

	fread(buffer, 1,sizeof(buffer), file); 

	printf("%s", buffer);

	fclose(file);
	*/

	int x = 5;
	int y = 5;

	// 동기화 : 다음 작업으로 넘어가기 위해 현재 하고 있는 작업을 다 끝내야 다음 작업으로 넘어갈 수 있는 것입니다.
	// 비동기화 : 다음 작업으로 넘어가기 위해 현재 하고 있는 작업 이외에 다른 작업을 하면서 넘어갈 수 있는 것입니다.

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
		printf("☆");
	}

	return 0;
}