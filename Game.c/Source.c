#include <stdio.h>

// 구조체 바이트 패딩
/*
struct value
{
	char a; // 1 byte 
	char b; // 1 byte
	char c; // 1 byte
};

// CPU가 연산을 할 때 4 바이트씩 읽는데 끊어지지 않게 하기 위해 4 / 4 / 4 로 패딩을 추가합니다.
struct Data
{
	// k는 1 byte이지만, CPU가 읽을 때 한번에 읽을 수 있도록 3 byte의 패딩이 추가가 되었습니다.
	// m은 1 byte이지만, CPU가 읽을 때 한번에 읽을 수 있도록 3 byte의 패딩이 추가가 되었습니다.

	// [k][pa][pa][pa] / [i][i][i][i] / [m][pa][pa][pa]

	int i;  // 4 byte 
	char k; // 1 byte + padding 3 byte
	char m; // 1 byte + padding 3 byte 

	// [i][i][i][i] 
	// [k][m][pa][pa]
    
	// 구조체의 크기는 멤버 변수의 순서에 따라 크기가 달라집니다.
};
*/

// 비트 필드
/*
struct Bit 
{
	char x; // 1 byte
	char y; // 1 byte
};

struct Byte
{
	// 비트 필드를 사용할 때 변수의 이름을 생략해서 사용할 수 있습니다.

	char h : 3; // 1 byte  [] [] []
	char n : 2; // 1 byte     [] []

    // [n] [h] [h] [h] [h] [h] [h] [h]
	// [ ] [ ] [ ] [ ] [ ] [ ] [n] [n] 
};
*/

// 열거체 
/*
enum Map
{
   Village,
   Battle,
   Sea,
   Heaven,
};
*/

int main()
{
    // 구조체 바이트 패딩
	/*
	printf("구조체 value의 크기 : %d\n", sizeof(struct value));
	printf("구조체 Data의 크기 : %d\n", sizeof(struct Data));
	*/

	// 비트 필드
	/*
	printf("Bit 구조체의 크기 : %d\n", sizeof(struct Bit));
	printf("Byte 구조체의 크기 : %d\n", sizeof(struct Byte));
	*/

	// 약수
	/*
	int value = 0;

	scanf_s("%d", &value);

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			printf("value의 약수 : %d\n", i);
		}
	}
	*/

	// 열거체
    /*
	// while문을 이용해서 내가 원하는 번호를 누르면 원하는 위치에 이동할 수 있도록 만들어 보세요.

	enum Map number = 0;
	int value = 0;

	while (1)	
	{
		printf("0.마을  1.결투장  2.바다  3.부활 신전");
		scanf_s("%d", &value);

		number = value;

		switch (number)
		{
		case Village:
			printf("마을에 도착했습니다.\n");
			break;
		case Battle:
			printf("결투장에 도착했습니다.\n");
			break;
		case Sea:
			printf("바다에 도착했습니다.\n");
			break;
		case Heaven:
			printf("부활 신전에 도착했습니다.\n");
			break;
		default:
			printf("다시 입력해주세요.\n");
			break;
		}
		
	}
	*/
	
	return 0;
}




