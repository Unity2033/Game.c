#include <stdio.h>

// ��� �Լ�
/*
int Function(int num)
{
	if (num < 1) 
	{
		return 1;
	}
	else
	{
		printf("Function\n");
		Function(num - 1);
	}
}
*/

// ���丮��
/*
int Factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return num * Factorial(num - 1);
	}
}
*/

int main()
{
	// ��� �Լ�
	/*
	int value = Function(5); // ���� �޸� ������ �ö󰬴ٰ� ���ᰡ �˴ϴ�. 

	printf("Function�� �� : %d", value);
	*/

	// ���丮��
    /*
	int result = Factorial(4);

	printf("Factorial�� �� : %d", result);
	*/

	// ���� ������ 
   /*
	void * vptr;

	char c = 'G';
	int a = 10;
	float d = 8.678;

	// vptr -> c�� �����ּҸ� ����ŵ�ϴ�.
	vptr = &c;

	// void �����ͷ� �����ϱ� ���ؼ��� �ڷ��� ��ȯ�� �ʿ��մϴ�.
	printf("c�� �� : %c\n", *(char*)vptr);

	// vptr -> a�� �����ּҸ� ��Ű���ϴ�.
	vptr = &a;
	printf("a�� �� : %d\n", *(int*)vptr);

	// vptr -> d�� �����ּҸ� ����ŵ�ϴ�.
	vptr = &d;
	printf("d�� �� : %f\n", *(float*)vptr);
	*/

	return 0;
}




