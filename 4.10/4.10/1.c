#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void shut()
{
	system("color 0c");
	printf("������û����ඣ�ԭ������ ��");
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{		
		printf("��ע�⣬��ĵ��Խ���60���ػ���������룺��������ȡ���ػ���\n");
		printf("�����룺");
		scanf(" %s", input);
		if (strcmp("������", input) == 0)
		{
			system("shutdown -a");
			break;
		}
	}
}

void menu()
{
	system("color 0e");
	Sleep(500);
	printf("\n");
	printf("             ��Ϸ���򣺵��Ի��Զ�����һ��������һ��������Ƕ���\n");
	printf("                 ��ֻ��5�λ��ᣬ�������꣬��Ϸ������    \n");
	printf("              ***************************************************\n");
	printf("         ������ʾ���������꣬���ĵ綯�Զ������ػ����򣬵��Ի���7���ػ�\n");
	printf("\n");
	printf("     ����������룺 �������롱������������ȡ���Զ��ػ���������Ϸ���˵ĳͷ�������ң�\n");
	printf("\n");
	printf("              ������Ҫ�����̼��ģ������̫���ˣ����������ϲ��\n");
	printf("\n");
	printf("                     ׼����������Ϸ��ʼ�ɣ��ҵ�С�ɰ���\n");


	printf("\n");
	printf("                * �� 1 �ٰ��س���ʼ��Ϸ �� �� 0 �ٰ��س��˳���Ϸ * \n");
	printf("\n");
	printf("              ******************   1.����Ϸ  ********************\n");
	printf("              ******************    0.�˳�    *******************\n");
	printf("              ***************************************************\n");
	printf("              ***************************************************\n");
	printf("\n");
	system("color 0d");

}

void game()
{
	int r = rand() % 100 + 1;
	int guess = 0; int count = 5;
	system("color 0d");
	while (count != 0)
	{
		printf("������һ�������ٰ��»س���\n");
		printf("\n");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
			printf("\n");
			system("color 0e");

			count--;
			if (count == 0)
			{
				shut;
			}
			else
			{
				printf("��Ϸ����\n");
			}
			printf("��ע�⣡����%d����\n", count);
			printf("\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
			system("color 0a");

			count--;
			if (count == 0)
			{
				shut;
			}
			else
			{
				printf("��Ϸ����\n");
			}

			printf("��ע�⣡����%d�λ���\n", count);
			printf("\n");
		}
		else if (guess = r)
		{
			count--;
			printf("ţ������������¶��ˣ��Ҳ�������һ�Σ�����һ���о�ϲ��\n");
			printf("\n");

			break;
		}

	}
}

//void color()
//{
//	
//	while (1)
//	{
//		system("color 0d");
//		Sleep(1200);
//		system("color 0e");
//		Sleep(1200);
//		system("color 0f");
//
//	}
//}


int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{

		menu();
		/*color();*/
		printf("��ѡ��");
		system("color 0b");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			printf("\n");
			break;
		default:
			printf("����������������룡\n");
			printf("\n");
			break;
		}

	} while (input);

	return 0;
}
