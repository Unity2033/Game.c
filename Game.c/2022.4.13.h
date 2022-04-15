#pragma once
#include <conio.h>
#include <windows.h>

// 파일 읽어오는 함수
/*
void Load_Text(const char * text) // 텍스트 파일을 불러오는 함수
{
	FILE* file = fopen(text, "r"); // 외부에 있는 텍스트 파일을 r(읽기) 모드로 열기
	char buffer[10000] = { 0, };

	// buffer = char 배열
	// 1 = 크기를 가지는 배열을 가리키는 포인터
	// 10000 = 읽어들일 원소의 크기로 단위는 바이트이며, size가 4 이면 하나의 원소의 크기는 4 바이트이다.
	// file = 데이터를 입력받을 스트림의 FILE 객체를 가리키는 포인터

	fread(buffer, 1, 10000, file); // 전체 읽기
	printf("%s", buffer);

	fclose(file); // 파일 닫기
}
*/

// main

// 파일 쓰기
/*
// master 텍스트파일을 w(쓰기) 모드로 열기
FILE * file = fopen("master.txt", "w");

fputs("MP : 100\n", file);
fputs("Attack : 10\n", file);

// 파일 포인터를 열고 나면 마지막에는 닫아주어야 합니다.
fclose(file);
*/

// 파일 읽기
/*
// master파일을 r(읽기) 모드로 열기
FILE* read = fopen("Resources/Start.txt","r");

char buffer[10000] = { 0, };

// buffer = char 배열
// 1 = 크기를 가지는 배열을 가리키는 포인터
// 10000 = 읽어들일 원소의 크기로 단위는 바이트이며, size가 4 이면 하나의 원소의           크기는 4 바이트이다.
// file = 데이터를 입력받을 스트림의 FILE 객체를 가리키는 포인터

fread(buffer, 1, 10000, read); // 전체 읽기

printf("%s", buffer);

fclose(read); // 파일 포인터 닫기
*/