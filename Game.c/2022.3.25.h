#pragma once

    // 값 교환 함수 (사용자 정의 함수)
/*
void Swap(int * x, int * y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
*/

    // cosnt 매개 변수
/*
void Const_Funciton(const int x, const int y)
{
	printf("x의 값 : %d   y의 값 : %d", x, y);
	// const 매개 변수는 값을 읽기 전용으로 설정할 때 사용합니다.
}
*/

// main 함수

    // 변수의 값을 교환하는 방법
	/*
	int a = 10;
	int b = 20;
	int c = 0;

	// 하나의 임시 메모리 공간만들어서 거기에 넣어주었다가 다시 대입할 수 있도록 해주어야 합니다.

	// c[10] <- a(10)
	c = a;

	// a[20] <- b[20]
	a = b;

	// b[20] <- c[10]
	b = c;

	printf("a의 값 : %d b의 값 :%d", a, b);
	*/

	// 참조에 의한 호출
	/*
	int num1 = 10;
	int num2 = 20;

	Swap(&num1, &num2);

	printf("num1 = %d  num2 = %d\n", num1, num2);
	*/

	// const 매개변수 함수 호출
	/*
	Const_Funciton(0, 0);
	*/

	// 배열
	/*
	int a[10] = {0,};

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
	*/