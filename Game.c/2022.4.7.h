#pragma once
#include <string.h>

// 함수 포인터
/*
void Function()
{
	printf("Hello~");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
*/

// main
    // 함수 포인터
	/*
	/*
	// 반환형과 매개변수가 없는 함수 포인터

	// 반환값과 매개변수가 없는 함수 포인터 ptr을 선언합니다.
	void (*ptr) ();

	// 함수 포인터 ptr로 Function의 시작주소를 가리키도록 설정합니다.
	ptr = Function;

	ptr();


	// 반환형과 매개변수가 있는 함수 포인터
	/*
	반환형 (포인터 변수) (매개변수)

	int (*vptr) (int, int);

	vptr = Add;
	printf("Add함수의 값 : %d\n", vptr(10, 10));

	vptr = Sub;
	printf("Sub함수의 값 : %d", vptr(5, 4));

	// 함수 포인터 배열
	/*
	int (*fptr[4]) (int, int);

	fptr[0] = Add;
	fptr[1] = Sub;
	fptr[2] = Mul;
	fptr[3] = Div;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", fptr[i](10, 5));
	}
	*/

	// 서로소 
	/*
	int num1 = 0, num2 = 0;
	int num1_R = 0, num2_R = 0;

	scanf_s("%d   %d", &num1, &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			num1_R = num1 / i;
			num2_R = num2 / i;
		}
	}

	printf("서로소 : num1의 %d num2의 %d", num1_R, num2_R);
	*/

	// 문자열 비교 함수
	/*
	char str[10] = { "Hallo" };
	char str1[10] = { "Hello" };

	printf("%d", memcmp(str, str1, 5));
	*/