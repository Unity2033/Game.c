#include <stdio.h>

// 재귀 함수
/*
int Function(int num)
{
	if (num < 1) 
	{
		return 1;
	}
	else
	{
		printf("Function\n");
		Function(num - 1);
	}
}
*/

// 팩토리얼
/*
int Factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return num * Factorial(num - 1);
	}
}
*/

int main()
{
	// 재귀 함수
	/*
	int value = Function(5); // 스택 메모리 영역에 올라갔다가 종료가 됩니다. 

	printf("Function의 값 : %d", value);
	*/

	// 팩토리얼
    /*
	int result = Factorial(4);

	printf("Factorial의 값 : %d", result);
	*/

	// 범용 포인터 
   /*
	void * vptr;

	char c = 'G';
	int a = 10;
	float d = 8.678;

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
	*/

	return 0;
}




