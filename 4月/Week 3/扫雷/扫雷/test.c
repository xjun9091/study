#define _CRT_SECURE_NO_WARNINGS 

#include"game.h"
//���в˵�
void menu()
{
	printf("*************************\n");
	printf("*******  1.paly   *******\n");
	printf("*******  0.exit   *******\n");
	printf("*************************\n");
}
//��Ϸ��ʵ��
void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��õ���
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ������
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');

	//��ӡ����
	/*printBorad(mine, ROW, COL);*/
	printBorad(show, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����������������\n");
			break;
		}
	} while (input);
		return 0;
}
