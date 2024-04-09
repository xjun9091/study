#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
////strlen 是一个库函数 - 求字符串的长度, 统计的是字符串中0之前的字符个数
////string.h
////strlen 返回的值是size_t 类型的，应该使用%zd
//int main()
//{
//	char acX[] = "abcdefg";//字符串
// //隐藏的\0
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%zd\n", sizeof acX);//8，
//	printf("%zd\n", sizeof acY);//7
//	//sizeof会将\0计算在内，而strlen不会 
// sizeof计算\0，strlen计算遇到\0就结束
//	printf("%zd\n", strlen (acX));//7
//	printf("%zd\n", strlen(acY));//因为没有"\0"停止符
//	return 0;
//}
//空格也会计算在内，无论sizeof还是strlen 


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//数组元素
//	printf("%zd\n", sizeof(arr));
//	return 0;
//}