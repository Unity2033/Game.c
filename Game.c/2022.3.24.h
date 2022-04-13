#pragma once

// void : 자료형이 존재하지 않기 때문에 반환할 게 없습니다.
/*
//void Function(int value, int x)
//{
//	value = value + 4;
//	printf("%d\n", value);
//}
*/

// 함수의 프로토 타입
/*
int Plus(int x, int y);
void Sub(int x, int y);
void Mul(int x, int y);
float Div(int x, int y);
*/

// main 함수

// 상수 지시 포인터 
/*
int value = 10;

// 상수 지시 포인터 : 포인터로 접근해서 값을 변경할 수 없도록 상수화하는 것입니다.
const int * ptr = &value;

// value라는 값을 변경하기 위해서는 ptr 포인터가 상수 지시 포인터이기 때문에 해당 변수로 가서 메모리를 변경해야합니다.
value = 63;

printf("%d\n", value);
*/

// 함수
/*
printf("Plus : %d\n",Plus(10, 5));

Sub(20,10);

Mul(1, 3);

float f = Div(3, 2);
printf("Div : %f", f);
*/

// return 

// 함수
/*
// 반환형 - 함수이름(매개변수 x, 매개변수 y)
int Plus(int x, int y)
{
	return x + y;
}

// 서로 같은 이름의 함수를 정의할 수 없습니다.
void Sub(int x, int y)
{
	printf("Sub : %d\n", x - y);
}

void Mul(int x, int y)
{
	printf("Mul : %d\n", x * y);
}

float Div(int x, int y)
{
	return (float)x / y;
}
*/