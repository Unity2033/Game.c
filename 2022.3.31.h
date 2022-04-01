#pragma once
#include <math.h> // 수학 함수를 사용하기 위한 라이브러리

// 두 점 사이의 거리
/*
struct Character
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};
*/

// 구조체
/*
struct Data
{
	char character; // 1 byte
	int integer;    // 4 byte
	float value;    // 4 byte
};
*/

// 자기 참조 구조체
/*
struct Bus
{
	char array[10];
	int value;
	struct Bus * Next; // 자기 자신을 참조할 수 있도록 포인터 변수를 생성합니다.
};
*/

// 구조체  
/*
	// 구조체는 선언을 했을 때 메모리 공간을 가지게 됩니다.
	struct Data data;

	// 멤버 연산자 (.)을 통해서 구조체 멤버에 있는 데이터에 접근해서 값을 초기화할 수 있습니다.

	data.character = 'a';
	data.integer = 10;
	data.value = 88.56;

	printf("Data의 character : %c\n", data.character);
	printf("Data의 interger : %d\n", data.integer);
	printf("Data의 value : %f", data.value);
	*/

// 두 점 사이의 거리 
/*
	// Character와 Monster 구조체를 생성하고 x, y의 값을 초기화합니다.
	struct Character wizard = { 0, 0 };
	struct Monster Orc = { 2, 3 };

	// 피타고라의 정리를 이용해서 wizard의 좌표값과 Orc의 좌표값을 서로 빼고 제곱을 합니다.
	int X_Distance = pow(wizard.x - Orc.x,2);
	int Y_Distance = pow(wizard.y - Orc.y,2);

	// float라는 변수를 생성해서 √ X_Distance + Y_Distance 계산합니다.
	float result = sqrt(X_Distance + Y_Distance);

	printf("몬스터와 나와의 거리 : %f", result);
	*/

// 자기 참조 구조체
/*
	struct Bus A = { 10, "A 정거장",NULL};
	struct Bus B = { 20, "B 정거장",NULL };
	struct Bus C = { 30, "C 정거장",NULL };

	// A라는 구조체의 멤버 변수의 구조체 포인터는 B라는 구조체의 시작주소를 가리킵니다.
	A.Next = &B;

	// B라는 구조체의 멤버 변수의 구조체 포인터는 C라는 구조체의 시작주소를 가리킵니다.
	B.Next = &C;

	// 더 이상 가리킬 주소가 없다면 NULL을 저장합니다.
	C.Next = NULL;

	printf("A의 value : %d\n", A.value);

	// A.Next는 다음 주소를 가리킬 수 있기 때문에 -> 로 B의 멤버 변수의 값에 접근할 수 있습니다.
	printf("B의 value : %d\n", A.Next->value = 1000);
	printf("B의 value : %s\n", A.Next->array);


	printf("C의 value : %d", B.Next->value);
	*/