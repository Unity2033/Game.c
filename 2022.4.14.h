#pragma once

#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib,"winmm.lib")

// ���� �Լ�
/*
void Size(int width, int Height)
{
	// sprintf() = ����ϴ� ��� ���� ������ �����ϴ� �Լ��Դϴ�.
	// cols=%d(����), lines=%d(����)
	// system() = Windows CMD ��ɹ��� �����ϴ� �Լ��� ȭ���� ũ�⸦ ��Ÿ���ϴ�.

	char command[100]; // Window CMD ��ɾ ���� ���� �迭�Դϴ�.

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
	// ���ϰ�ο� �̸�
	// SND_FILENAME | SND_ASYNC  �Ϲ� ���
	// SND_FILENAME | SND_ASYNC | SND_LOOP �ݺ� ���
	// PlaySound�Լ��� Wav ���ϸ� �����ŵ�ϴ�.
	PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP ); //���� ���

	while (1)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			break;
		}
	}
	*/

	// �Ҽ�
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
		printf("�Ҽ��Դϴ�.");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.");
	}
	*/
