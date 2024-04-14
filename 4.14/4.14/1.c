#define _CRT_SECURE_NO_WARNINGS 
//#include <graphics.h>		// 引用图形库头文件
//#include <conio.h>
//#include<stdio.h>
//int main()
//{
//	initgraph(600, 840,1000);
//	circle(100, 100, 200);
//	getchar();
//	closegraph();
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    int a = 0;
//    char arr1[] = { 0 };
//    char arr2[] = { 0 };
//    int left = 0;
//    int right = sizeof(arr1) / sizeof(arr1[0]) - 1; //strlen(arr1)
//    scanf("%d", &a);
//    for (int i = 0; i <= a - 1; i++)
//    {
//        arr1[i] = '*';
//    }
//    arr1[a] = '\0';
//    for (int j = 0; j<= a - 1; j++)
//    {
//        arr2[j] = ' ';
//    }
//    arr2[a] = '\0'; 
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n ;j++)
//		{
//			if (j == i)
//			{
//				printf("*");
//			}
//			else if(j == n-i-1 )
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1;j <= n; j++)
//		{
//			if (j == i)
//			{
//				printf("*");
//			}
//			else if (j == n-i+1 )
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == 0 || j == 0)
//                    printf("*");
//                else if (i == a-1 || j == a-1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n, m;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
int main()
{
    int n = 0;
    int m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    //输入n和m
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    //输入两个升序序列
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //合并有序序列并输出
    i = 0; j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    //判断尚未遍历完的数组是否需要打印输出
    if (i == n && j < m)
        for (; j < m; j++)
            printf("%d ", arr2[j]);
    else
        for (; i < n; i++)
            printf("%d ", arr1[i]);
    return 0;
}