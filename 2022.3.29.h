#pragma once
#include <string.h>

// main 함수

// 문자열 : 가장 끝에 NULL 문자가 포함됩니다.
	/*

			  // [A] [B] [C] [D] [E] [\0] [ ] [ ] [ ] [ ]
	char character[10] = {'A','B','C','D','E'};

	printf("%s\n", character);
	printf("배열의 주소 : %p\n", character);


	// 1byte 포인터 -> // [K] [i] [m] [G] [u] [ ] [ ] [ ] [ ]
	// value라는 포인터 변수는 문자배열의 시작주소를 가리킵니다.
	// 상수 지시 포인터로 선언해서 포인터에 접근해서 값을 변경할 수 없도록 설정합니다.
	const char * value = "KimGeumsoo";

	printf("%s", value);
	*/

	// 아스키 코드
	/*
	char value = 0;

	for (int i = 0; i < 26; i++)
	{
		value = 'A' + i;
		printf("%c\n", value);
	}
	*/

	// 문자열 길이 함수
	/*
	// 한글은 유니코드 체계를 사용하기 때문에 2 Byte의 메모리 공간을 가지게 됩니다.
	char oop[] = "게임";

	// 문자열의 길이는 NULL 문자 이전까지의 길이만 계산합니다.
	printf("%d\n", strlen(oop));

	// 문자열의 공백도 메모리 공간에 포함됩니다.
	char name[] = "k i m g e u m s o o";

	printf("name의 문자열 길이 : %d\n", strlen(name));

	// NULL문자를 문자열 사이에 넣게되면 NULL문자 이전 까지만, 출력됩니다.
	char number[] = "Fi\0rst";

	printf("number의 문자열 길이 : %d", strlen(number));
	*/

	// 문자열 연결 함수
	/*
	char Forename[] = "geumsoo";

	char Surnname[13] = "kim";

	strcat(Surnname, Forename);

	printf("%s", Surnname);
	*/

	// 문자열 비교 함수
	/*
	// First_Alphabet 문자 배열을 아스키 코드로 변환하면 97 + 97 + 97 = 291이라는 값을 가지게 됩니다.
	char First_Alphabet [ ] = "aaa";

	// Second_Alphabet 문자 배열을 아스키 코드로 변환하면 97 + 97 + 98 = 292이라는 값을 가지게 됩니다.
	char Second_Alphabet[] = "aab";

	// 첫 번째 문자 배열이 크면 1을 반환하고, 서로 같으면 0을 반환합니다.
	// 두 번째 문자 배열이 크면 -1을 반환합니다.
	printf("%d",strcmp(First_Alphabet, Second_Alphabet));
	*/