#pragma once

// 지역 변수
// { } 내에서 선언된 변수이며, { }를 벗어나면 메모리에서 사라지는 특징을 가집니다.
/*
void Function()
{
	// Function 함수라는 지역에서 거주하고 있는 x 변수가 생성됩니다.
	int x = 100;
}
*/

// 전역 변수
// 함수 외부에서 선언된 변수로 어디에서든지 접근이 가능하며, 프로그램이 종료되어야만 메모리에서 사라지는 특징을 가집니다.
/*
int value = 10;

void Global()
{
	value++;
}
*/

// 정적 변수
// 지역 변수와 전역 변수의 특징을 다 가지고 있는 변수입니다.
/*
void Static()
{
	// 정적 변수는 초기화를 하지 않으면 0이라는 값이 들어갑니다.
	static int value;
	value++;
	printf("value의 값 : %d\n", value);
	printf("static value의 주소 : %p\n", &value);
}
*/

// union
/*
union Block
{
	char a; // 1 byte
	int b;  // 4 byte
	float c; // 4 byte
};
*/

// 문자열 복사 함수
/*
char color [10];
char black [6] = { 'B','l','a','c','k' };

strcpy(color, black);

printf("%s", color);
*/

// 지역 변수
/*
int x = 3; // main 지역에서 거주하는 x 변수입니다.

// 지역 생성
{
	int x = 10;  // 새로운 지역에서 거주하는 x 변수입니다.
}

Function();

printf("x의 값 : %d", x);
*/

// 전역 변수
/*
Global();
printf("전역 변수 : %d", value);
*/

// 정적 변수
/*
Static();
Static();
Static();
*/

// 레지스터 변수
/*
register int value = 100;

printf("%d", value);
*/

// union
/*
union Block block = {'A'};

printf("Block a의 값 : %c\n", block.a);
printf("Block b의 값 : %d\n", block.b);
printf("Block c의 값 : %f\n", block.c);

printf("Block의 사이즈 : %d", sizeof(block));
*/