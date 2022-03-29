#pragma once

    // 포인터 배열 
	/*
	int a = 10;
	int b = 20;
	int c = 15;
	int d = 100;

	printf("a의 주소 : %p\n", &a);
	printf("b의 주소 : %p\n", &b);
	printf("c의 주소 : %p\n", &c);
	printf("d의 주소 : %p\n", &d);

					// [0] [1] [2] [3]
	int * array[4] = { &a, &b, &c, &d };

	// 배열의 주소는 배열의 첫 번째 시작주소입니다.
	printf("%p\n", array);
	printf("%p\n", &array[0]);
	printf("%p\n", &array[1]);
	printf("%p\n", &array[2]);
	printf("%p\n", &array[3]);
	*/

	// 최소값과 최댓값 구하기
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

	printf("최대값 : %d | 최소값 : %d", max, min);
	*/

	// 2차원 배열
	/*
	int double_array [2][3] =
	{
		{1, 2, 5}, // 1 행
		{3, 10, 15}  // 2 행
	};

	// 2중 for문을 이용해서 2차원 배열에 있는 값을 출력해주세요.
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("2차원 %d 행에 %d 열의 배열 값 : %d\n", i, j, double_array[i][j]);
		}

		printf("\n");
	}
	*/