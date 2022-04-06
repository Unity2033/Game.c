#pragma once
#include <stdlib.h> // 동적할당을 하기 위해 stdlib.h를 선언해야 합니다.
#include <time.h> // 시간 관련 함수

// 범용 포인터
/*
void Function(char * character ,void * value)
{
	if (character == "int")
	{
		printf("%d", *(int*) value);
	}
	else if (character == "float")
	{
		printf("%f", *(float*)value);
	}
	else if (character == "char")
	{
		printf("%c", *(char*)value);
	}
}
*/

// main

	// 범용 포인터      
	/*
	void * vptr; // 포인터는 4 byte의 크기를 가집니다.

	char c = 'G';    // 1 byte
	int a = 10;      // 4 byte
	float d = 8.678; // 4 byte

	// vptr -> c의 시작주소를 가리킵니다.
	vptr = &c;

	// void 포인터로 접근하기 위해서는 자료형 변환이 필요합니다.
	printf("c의 값 : %c\n", *(char*)vptr);

	// vptr -> a의 시작주소를 가키립니다.
	vptr = &a;
	printf("a의 값 : %d\n", *(int*)vptr);

	// vptr -> d의 시작주소를 가리킵니다.
	vptr = &d;
	printf("d의 값 : %f\n", *(float*)vptr);

	int a = 100;
	float b = 5.34;
	char c = 'A';

	Function("char", &c);
	*/

	// 동적 할당 및 해제
	/*
	// malloc 함수는 byte 크기만큼 메모리를 저장할 수 있습니다.
	char * ptr = (char *)malloc(5);

	// ptr [0] [1] [2] [3] [4] 동적 할당이 되었습니다.
	printf("동적으로 할당한 메모리의 주소 : %p\n", &ptr);

	ptr[0] = 'G';
	ptr[1] = 'K';
	ptr[2] = 'I';
	ptr[3] = 'Q';
	ptr[4] = 'B';

	printf("%c\n", ptr[0]);
	printf("%c\n", ptr[1]);
	printf("%c\n", ptr[2]);
	printf("%c\n", ptr[3]);
	printf("%c\n", ptr[4]);

	// free함수는 내가 할당한 메모리를 해제하는 함수입니다.
	free(ptr);


	int data = 5; // 스택에 저장되어 있는 메모리 공간
	int * value = &data;

	printf("value의 값 : %d", *value);

	// 힙 영역에 있는 메모리를 해제해야하는 스택에 있는 data의 메모리를 해제하게 되어 오류가 발생합니다.
	free(value);
	*/

	// 랜덤 함수
	/*
	int value = 0;

	// 1970년 1월 1일의 시간을 기준으로 랜덤을 계산합니다.
	srand(time(NULL));

	// value의 값이 한 자릿수만 나오도록 설정합니다.
	// value의 값이 0이 안나도록 출력해주세요,

	for (int i = 0; i < 10; i++)
	{
		// rand() : 0 ~ 32767 사이의 난수를 생성하는 함수입니다.
		value = rand() % 10 + 1;

		printf("%d\n", value);
	}
	*/

	// UP - DOWN 게임
	/*
	//int value = 0;

	//int life = 5;

	//int input = 0;

	//// 시간을 가져와서 랜덤값을 생성합니다.
	//srand(time(NULL));

	//// 1 ~ 50 사이의 값을 저장할 수 있도록 설정합니다.
	//value = rand() % 50 + 1;

	//while (1)
	//{
	//	printf("컴퓨터가 가지고 있는 값을 입력해주세요.\n");
	//	scanf_s("%d", &input);
	//	printf("\n");

	//	if (life <= 0)
	//	{
	//		printf("\n컴퓨터가 가지고 있는 값을 알아내지 못했습니다.");
	//		break;
	//	}

	//	if (value == input)
	//	{
	//		printf("\n컴퓨터가 가지고 있는 값을 알아냈습니다.\n");
	//		break;
	//	}
	//	else if (value > input)
	//	{
	//		printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
	//		life--;
	//	}
	//	else if (value < input)
	//	{
	//		printf("컴퓨터가 가지고 있는 값보다 큽니다.");
	//		life--;
	//	}
	//}
	*/