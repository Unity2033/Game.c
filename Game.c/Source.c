#include <stdio.h> 

// c 언어는 컴파일러에 특정 작업을 지시하는 전처리기를 제공합니다.
// 전처리기 : 컴파일하기 이전에 값이나 작업을 미리 설정하는 것입니다.

// 매크로
#define Value 10

// 매크로 함수
#define PRT(X) printf("PRT 함수의 결과 : %d\n",X)

int main()
{ 
	// 배열의 크기
	/*
 	int array[ ] = { 0,1,2,3,4};

	printf("배열의 크기 : %d\n", sizeof(array));
	

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("array[%d]의 값 : %d\n", i, array[i]);
	}
	*/

	// 매크로
	/*
	for (int i = 1; i <= Value; i++)
	{
		printf("i의 값 : %d\n", i);
	}
	*/

	// 매크로 함수
	/*
	PRT(10);
	*/

	// 빌드
	/*
	int variable = 0;

	while (1)
	{
		printf("게임을 종료하기 위해서 2번 키를 입력해주세요.\n");

		scanf_s("%d", &variable);

		if (variable == 2)
		{
			break;
		}
	}
	*/
	
	return 0;
}




