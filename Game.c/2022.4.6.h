#pragma once
// 라이브러리 헤더 파일 < > 포함시켜야 합니다.
// 사용자 정의 헤더 파일 " "포함시켜야 합니다.

#include <string.h>
#include <stdlib.h> 
#include <time.h> 

// main

    // 허상 포인터
	/*
	// 스택 ptr -> 힙 영역의 메모리를 가리킵니다.
	//      ptr -> NULL

	int * ptr = (int *)malloc(sizeof(int));

	*ptr = 10;

	printf("동적으로 할당한 메모리의 값 : %d\n", *ptr);

	free(ptr);

	// ptr은 이미 해제된 메모리이기 때문에 NULL이라는 곳으로 가리켜서 예외처리를 합니다.
	ptr = NULL;

	printf("동적으로 할당한 메모리의 값 : %d", *ptr);
	*/

	// 중복이 되지 않는 랜덤 함수
	/*
	srand(time(NULL));

	int array[10] = {0,};

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;

		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
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

	// 메모리 초기화 함수
	/*
	char name[11] = { "kimgeumsoo" };

	memset(name, 'G', 3);

	printf("%s", name);


	int array[5];

	memset(array, 1, sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", array[i]);
	}
	*/

	// 메모리 복사 함수
	/*
	const char * s = "Count";
	char d[] = "NickName";

	memcpy(d, s, sizeof(char) * 5);

	printf("%s", d);
	*/