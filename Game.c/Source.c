#include <stdio.h>

int main()
{
	
	// 증감 연산자
/*
int number_1 = 10;
int number_2 = 10;

// ++가 변수 앞에 오게되면 먼저 연산을 수행한 후에 값을 증가시킵니다.
printf("전위 증가 연산자 : %d\n", ++number_1);

// --가 변수 앞에 오게되면 먼저 연산을 수행한 후에 값을 감소시킵니다.
printf("전위 감소 연산자 : %d\n", --number_2);

// 변수 뒤에 ++가 오게되면 나중에 값을 증가시키고 연산을 수행합니다.
printf("후위 증가 연산자 : %d\n", number_1++);

// 변수 뒤에 --가 오게되면 나중에 값을 감소시키고 연산을 수행합니다.
printf("후위 감소 연산자 : %d\n", number_2--);

printf("number_1의 값 : %d\n", number_1);
printf("number_2의 값 : %d\n", number_2);
*/

// while 문
/*
int person = 3;

while (person > 2) //
{
	printf("공장의 인원을 재 배치해주세요.\n");
	scanf_s("%d", &person);
}
*/

// do while 문
/*
do
{
	printf("조건이 틀렸지만, 실행됩니다.");
}
while (3 > 2);
*/

// for 문
/*
int value = 1;

for (int i = 0; i <= 5; i++)
{
	printf("%d", value);
}
*/

// 1 ~ 10까지의 합을 구해주세요.
//int value = 0;

//for (int i = 1; i <= 10; i++)
//{
//	value += i;
//}

//printf("1 ~ 10 까지의 합 : %d", value);

// 구구단 
	/*
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}
	*/


	return 0;
}