#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>//����srand����
#include<time.h>//����time����
void menu()
{
	//��Ϸ�˵�
	printf("****************************\n");
	printf("******* 1.��Ϸ��ʼ *********\n");
	printf("******* 0.��Ϸ���� *********\n");
	printf("****************************\n");
}
void game()
{
	//��Ϸ���߼�
	//�������������1~100
	int r = rand() % 100 + 1;
	while(1)
	{
		int guess = 0;
		printf("�������:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if (guess > r)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	//1.���������
	srand((unsigned int)time(NULL));
	int i= 0;
	do 
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:");
		scanf("%d", &i);
		switch(i)
		{		
			case 1:
				printf("��Ϸ��ʼ\n");
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:				
				printf("���������������\n");
				break;				
		}
	} while (i);
	return 0;
}