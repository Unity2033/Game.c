#pragma once

    // ������
	/*
	// value��� �޸� ������ �����߽��ϴ�.
	int value = 10;

	int a = 50;

	// �������� ũ��� 4 byte�Դϴ�.
	// CPU�� �ü���� ���� 4 ~ 8 byte�� ũ�⸦ ���� �� �ֽ��ϴ�.
	int * ptr = &value;

	printf("������ ������ �� : %d\n", *ptr);

	ptr = &a;

	* ptr = 1000;

	printf("������ ������ �� : %d\n", *ptr);

	printf("�������� ũ�� : %d", sizeof(ptr));
	*/

	// ���� ������
	/*
	int x = 0;

	int * ptr = &x;

	int ** pptr = &ptr;

	printf("���� x�� �ּ� : %p\n", &x);
	printf("ptr�� �ּ� : %p\n", &ptr);
	printf("pptr�� �ּ� : %p\n", &pptr);

	printf("pptr�� �� : %d", **pptr);
	*/

	// for statement 
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	*/
