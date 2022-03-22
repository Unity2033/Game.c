#include <stdio.h>

int main()
{
	// continue 문
    /*
	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}

		printf("%d\n", i);
	}
	*/

	// 쉬프트 연산자
	/*
	int memory = 3; // 0000 0011

	// 비트를 3번 오른쪽으로 이동시켰습니다.
	printf("%d\n", memory <<= 3); // 0001 1000

	// 비트를 5번 왼쪽으로 이동시켰습니다.
	memory >>= 5;
	
	printf("%d", memory); // 0000 0000
	*/

	// 최대 공약수 
	/*
	int value1 = 16;
	int value2 = 20;

	int result = 0;

	for (int i = 1; i <= value1 && i <= value2; i++)
	{
		if (value1 % i == 0 && value2 % i == 0)
		{
			result = i;
		}
	}
	

	printf("%d", result);
	*/

	int value = 10; 

	printf("%p\n", &value);

	// 포인터 변수도 자체적으로 메모리 공간을 가지고 있습니다.
	int * ptr = &value;

	// ptr  = value의 시작주소를 가리키는 것입니다.
	// &ptr = ptr의 메모리 주소가 출력되는 거에요.

	printf("%p", &ptr);

	*ptr = 2000;

	printf("%d", value);

	return 0;
}