#pragma once
// ���̺귯�� ��� ���� < > ���Խ��Ѿ� �մϴ�.
// ����� ���� ��� ���� " "���Խ��Ѿ� �մϴ�.

#include <string.h>
#include <stdlib.h> 
#include <time.h> 

// main

    // ��� ������
	/*
	// ���� ptr -> �� ������ �޸𸮸� ����ŵ�ϴ�.
	//      ptr -> NULL

	int * ptr = (int *)malloc(sizeof(int));

	*ptr = 10;

	printf("�������� �Ҵ��� �޸��� �� : %d\n", *ptr);

	free(ptr);

	// ptr�� �̹� ������ �޸��̱� ������ NULL�̶�� ������ �����Ѽ� ����ó���� �մϴ�.
	ptr = NULL;

	printf("�������� �Ҵ��� �޸��� �� : %d", *ptr);
	*/

	// �ߺ��� ���� �ʴ� ���� �Լ�
	/*
	srand(time(NULL));

	int array[10] = {0,};

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;

		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	// �޸� �ʱ�ȭ �Լ�
	/*
	char name[11] = { "kimgeumsoo" };

	memset(name, 'G', 3);

	printf("%s", name);


	int array[5];

	memset(array, 1, sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", array[i]);
	}
	*/

	// �޸� ���� �Լ�
	/*
	const char * s = "Count";
	char d[] = "NickName";

	memcpy(d, s, sizeof(char) * 5);

	printf("%s", d);
	*/