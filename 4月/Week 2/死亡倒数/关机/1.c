#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//�����ʼ���ַ���
	system("shutdown -s -t 60");//�ػ����60��
again:
	printf("��ܰ��ʾ�����ĵ��Խ���һ���Ӻ�ػ��������롰������ȡ���ػ�\n");
	scanf("%s", input);//�����ַ���
		if (strcmp("������",input) == 0)//�����ַ����Ƿ���ȷ
		{
			system("shutdown -a");//ȡ���ػ�
			printf("��ȡ���ػ�\n");
		}
		else
		{
			goto again;//�ٴ�
		}
	return 0;
}