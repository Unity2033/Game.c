#pragma once

    // ������ �迭 
	/*
	int a = 10;
	int b = 20;
	int c = 15;
	int d = 100;

	printf("a�� �ּ� : %p\n", &a);
	printf("b�� �ּ� : %p\n", &b);
	printf("c�� �ּ� : %p\n", &c);
	printf("d�� �ּ� : %p\n", &d);

					// [0] [1] [2] [3]
	int * array[4] = { &a, &b, &c, &d };

	// �迭�� �ּҴ� �迭�� ù ��° �����ּ��Դϴ�.
	printf("%p\n", array);
	printf("%p\n", &array[0]);
	printf("%p\n", &array[1]);
	printf("%p\n", &array[2]);
	printf("%p\n", &array[3]);
	*/

	// �ּҰ��� �ִ� ���ϱ�
	/*
	int array[5] = { 0, };
	int value = 0;

	int min = 100000;
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &value);
		array[i] = value;

		if (array[i] >= max)
		{
			max = array[i];
		}

		if (array[i] <= min)
		{
			min = array[i];
		}
	}

	printf("�ִ밪 : %d | �ּҰ� : %d", max, min);
	*/

	// 2���� �迭
	/*
	int double_array [2][3] =
	{
		{1, 2, 5}, // 1 ��
		{3, 10, 15}  // 2 ��
	};

	// 2�� for���� �̿��ؼ� 2���� �迭�� �ִ� ���� ������ּ���.
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("2���� %d �࿡ %d ���� �迭 �� : %d\n", i, j, double_array[i][j]);
		}

		printf("\n");
	}
	*/