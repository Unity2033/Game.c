#pragma once

#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib,"winmm.lib")

// 게임 함수
/*
void Size(int width, int Height)
{
	// sprintf() = 출력하는 결과 값을 변수에 저장하는 함수입니다.
	// cols=%d(가로), lines=%d(세로)
	// system() = Windows CMD 명령문을 실행하는 함수로 화면의 크기를 나타냅니다.

	char command[100]; // Window CMD 명령어를 담을 문자 배열입니다.

	sprintf(command, "mode con: cols=%d lines=%d", width, Height);
	system(command);
}

void FullScreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

void Typing(const char* text)
{
	int i = 0;

	while (text[i] != 0)
	{
		printf("%c", text[i++]);
		fflush(stdout);
		Sleep(250);
	}
}
*/

// main

  // PlaySound
	/*
	// 파일경로와 이름
	// SND_FILENAME | SND_ASYNC  일반 재생
	// SND_FILENAME | SND_ASYNC | SND_LOOP 반복 재생
	// PlaySound함수는 Wav 파일만 재생시킵니다.
	PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP ); //루프 재생

	while (1)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			break;
		}
	}
	*/

	// 소수
	/*
	int value = 0;
	int count = 0;

	scanf_s("%d", &value);

	for (int i = 2; i < value; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}

	if (count == 0)
	{
		printf("소수입니다.");
	}
	else
	{
		printf("소수가 아닙니다.");
	}
	*/
