#pragma once

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