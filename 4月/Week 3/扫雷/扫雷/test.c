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
	InitBoard(mine, ROWS, COLS, '0');//����������
	InitBoard(show, ROWS, COLS, '*');//��ʾ����

	//��ӡ����
	/*printBoard(mine, ROW, COL);*/
	printBoard(show, ROW, COL);

	//������
	SetMine(mine,ROW,COL);
	/*printBoard(mine, ROW, COL);*/

	//�Ų���
	Findmine(mine,show, ROW, COL);
} 

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:> ");
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

