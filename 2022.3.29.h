#pragma once
#include <string.h>

// main �Լ�

// ���ڿ� : ���� ���� NULL ���ڰ� ���Ե˴ϴ�.
	/*

			  // [A] [B] [C] [D] [E] [\0] [ ] [ ] [ ] [ ]
	char character[10] = {'A','B','C','D','E'};

	printf("%s\n", character);
	printf("�迭�� �ּ� : %p\n", character);


	// 1byte ������ -> // [K] [i] [m] [G] [u] [ ] [ ] [ ] [ ]
	// value��� ������ ������ ���ڹ迭�� �����ּҸ� ����ŵ�ϴ�.
	// ��� ���� �����ͷ� �����ؼ� �����Ϳ� �����ؼ� ���� ������ �� ������ �����մϴ�.
	const char * value = "KimGeumsoo";

	printf("%s", value);
	*/

	// �ƽ�Ű �ڵ�
	/*
	char value = 0;

	for (int i = 0; i < 26; i++)
	{
		value = 'A' + i;
		printf("%c\n", value);
	}
	*/

	// ���ڿ� ���� �Լ�
	/*
	// �ѱ��� �����ڵ� ü�踦 ����ϱ� ������ 2 Byte�� �޸� ������ ������ �˴ϴ�.
	char oop[] = "����";

	// ���ڿ��� ���̴� NULL ���� ���������� ���̸� ����մϴ�.
	printf("%d\n", strlen(oop));

	// ���ڿ��� ���鵵 �޸� ������ ���Ե˴ϴ�.
	char name[] = "k i m g e u m s o o";

	printf("name�� ���ڿ� ���� : %d\n", strlen(name));

	// NULL���ڸ� ���ڿ� ���̿� �ְԵǸ� NULL���� ���� ������, ��µ˴ϴ�.
	char number[] = "Fi\0rst";

	printf("number�� ���ڿ� ���� : %d", strlen(number));
	*/

	// ���ڿ� ���� �Լ�
	/*
	char Forename[] = "geumsoo";

	char Surnname[13] = "kim";

	strcat(Surnname, Forename);

	printf("%s", Surnname);
	*/

	// ���ڿ� �� �Լ�
	/*
	// First_Alphabet ���� �迭�� �ƽ�Ű �ڵ�� ��ȯ�ϸ� 97 + 97 + 97 = 291�̶�� ���� ������ �˴ϴ�.
	char First_Alphabet [ ] = "aaa";

	// Second_Alphabet ���� �迭�� �ƽ�Ű �ڵ�� ��ȯ�ϸ� 97 + 97 + 98 = 292�̶�� ���� ������ �˴ϴ�.
	char Second_Alphabet[] = "aab";

	// ù ��° ���� �迭�� ũ�� 1�� ��ȯ�ϰ�, ���� ������ 0�� ��ȯ�մϴ�.
	// �� ��° ���� �迭�� ũ�� -1�� ��ȯ�մϴ�.
	printf("%d",strcmp(First_Alphabet, Second_Alphabet));
	*/