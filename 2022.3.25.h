#pragma once

    // �� ��ȯ �Լ� (����� ���� �Լ�)
/*
void Swap(int * x, int * y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
*/

    // cosnt �Ű� ����
/*
void Const_Funciton(const int x, const int y)
{
	printf("x�� �� : %d   y�� �� : %d", x, y);
	// const �Ű� ������ ���� �б� �������� ������ �� ����մϴ�.
}
*/

// main �Լ�

    // ������ ���� ��ȯ�ϴ� ���
	/*
	int a = 10;
	int b = 20;
	int c = 0;

	// �ϳ��� �ӽ� �޸� �������� �ű⿡ �־��־��ٰ� �ٽ� ������ �� �ֵ��� ���־�� �մϴ�.

	// c[10] <- a(10)
	c = a;

	// a[20] <- b[20]
	a = b;

	// b[20] <- c[10]
	b = c;

	printf("a�� �� : %d b�� �� :%d", a, b);
	*/

	// ������ ���� ȣ��
	/*
	int num1 = 10;
	int num2 = 20;

	Swap(&num1, &num2);

	printf("num1 = %d  num2 = %d\n", num1, num2);
	*/

	// const �Ű����� �Լ� ȣ��
	/*
	Const_Funciton(0, 0);
	*/

	// �迭
	/*
	int a[10] = {0,};

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
	*/