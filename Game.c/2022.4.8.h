#pragma once

// 10진수의 수를 2진수로 변환
/*
int value = 0;

int array[8] = {0,}; // [0] [0] [0] [0] [0] [0] [0] [0]

int count = 0;

scanf_s("%d", &value);


while (value > 0)
{
	if (value % 2 == 0)
	{
		for (int i = count; i < count + 1; i++)
		{
			array[i] = 0;
		}

		count++;
	}
	else
	{
		for (int i = count; i < count + 1; i++)
		{
			array[i] = 1;
		}

		count++;
	}

	value = value / 2;
}


for (int i = 7; 0 <= i; i--)
{
	printf("%d  ", array[i]);
}
*/

// 최소 공배수
/*
int num1 = 0;
int num2 = 0;

int num1_R = 0;
int num2_R = 0;
int gcd = 0;

scanf_s("%d  %d", &num1, &num2);

for (int i = 1; i <= num1 && i <= num2; i++)
{
	if (num1 % i == 0 && num2 % i == 0)
	{
		num1_R = num1 / i;
		num2_R = num2 / i;

		gcd = i;
	}
}

printf("%d", gcd * num1_R * num2_R);
*/