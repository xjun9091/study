#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//定义初始化字符串
	system("shutdown -s -t 60");//关机命令，60秒
again:
	printf("温馨提示，您的电脑将在一分钟后关机，请输入“我是猪”取消关机\n");
	scanf("%s", input);//输入字符串
		if (strcmp("我是猪",input) == 0)//检验字符串是否正确
		{
			system("shutdown -a");//取消关机
			printf("已取消关机\n");
		}
		else
		{
			goto again;//再次
		}
	return 0;
}