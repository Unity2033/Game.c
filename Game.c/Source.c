#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <conio.h>
#include <windows.h>

void Load_Text(const char * text) // �ؽ�Ʈ ������ �ҷ����� �Լ�
{
	FILE* file = fopen(text, "r"); // �ܺο� �ִ� �ؽ�Ʈ ������ r(�б�) ���� ����
	char buffer[10000] = { 0, };

	// buffer = char �迭
	// 1 = ũ�⸦ ������ �迭�� ����Ű�� ������ 
	// 10000 = �о���� ������ ũ��� ������ ����Ʈ�̸�, size�� 4 �̸� �ϳ��� ������ ũ��� 4 ����Ʈ�̴�.
	// file = �����͸� �Է¹��� ��Ʈ���� FILE ��ü�� ����Ű�� ������

	fread(buffer, 1, 10000, file); // ��ü �б�
	printf("%s", buffer);

	fclose(file); // ���� �ݱ�
}

int main()
{
	// ���� ����
	/*
	// master �ؽ�Ʈ������ w(����) ���� ����
	FILE * file = fopen("master.txt", "w");

	fputs("MP : 100\n", file);
	fputs("Attack : 10\n", file);

	// ���� �����͸� ���� ���� ���������� �ݾ��־�� �մϴ�.
	fclose(file);
	*/

	// ���� �б�
	/*
	// master������ r(�б�) ���� ����
	FILE* read = fopen("Resources/Start.txt","r");
	
	char buffer[10000] = { 0, };

	// buffer = char �迭
    // 1 = ũ�⸦ ������ �迭�� ����Ű�� ������ 
    // 10000 = �о���� ������ ũ��� ������ ����Ʈ�̸�, size�� 4 �̸� �ϳ��� ������           ũ��� 4 ����Ʈ�̴�.
    // file = �����͸� �Է¹��� ��Ʈ���� FILE ��ü�� ����Ű�� ������

	fread(buffer, 1, 10000, read); // ��ü �б�

	printf("%s", buffer);

	fclose(read); // ���� ������ �ݱ�
	*/


	int value = 0;

	while (1)
	{
		scanf_s("%d", &value);

		system("cls");

		switch (value)
		{
		case 0:
			Load_Text("Resources/Air.txt");
			break;
		case 1:
			Load_Text("Resources/Car.txt");
			break;
		case 2:
			Load_Text("Resources/G.txt");
			break;
		}


	}

	return 0;

}




