#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
////strlen ��һ���⺯�� - ���ַ����ĳ���, ͳ�Ƶ����ַ�����0֮ǰ���ַ�����
////string.h
////strlen ���ص�ֵ��size_t ���͵ģ�Ӧ��ʹ��%zd
//int main()
//{
//	char acX[] = "abcdefg";//�ַ���
// //���ص�\0
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%zd\n", sizeof acX);//8��
//	printf("%zd\n", sizeof acY);//7
//	//sizeof�Ὣ\0�������ڣ���strlen���� 
// sizeof����\0��strlen��������\0�ͽ���
//	printf("%zd\n", strlen (acX));//7
//	printf("%zd\n", strlen(acY));//��Ϊû��"\0"ֹͣ��
//	return 0;
//}
//�ո�Ҳ��������ڣ�����sizeof����strlen 


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//����Ԫ��
//	printf("%zd\n", sizeof(arr));
//	return 0;
//}