#pragma once

// main �Լ�

// continue ��
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

// ����Ʈ ������
/*
int memory = 3; // 0000 0011

// ��Ʈ�� 3�� ���������� �̵����׽��ϴ�.
printf("%d\n", memory <<= 3); // 0001 1000

// ��Ʈ�� 5�� �������� �̵����׽��ϴ�.
memory >>= 5;

printf("%d", memory); // 0000 0000
*/

// �ִ� ����� 
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