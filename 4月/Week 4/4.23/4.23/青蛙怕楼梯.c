#define _CRT_SECURE_NO_WARNINGS 
//��֪��n��¥�ݣ�С����һ�ο���1�׻�2��¥��
//��С����Ҫ����¥�����ܹ��ж���������
//쳲���������
#include <stdio.h>

int meth(int n)//̨��
{
	int step = 0;//����
	if (n == 1||n == 0)
		return 1;
	else
		return meth(n - 1) + meth(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = meth(n);
	printf("С������%d��̨���е�%d�ַ���\n", n, m);
	return 0;
}

//#include <stdio.h>  
//
//// ʹ�õݹ麯��������������  
//int frogJump(int n) {
//    if (n <= 0) {
//        return 0;
//    }
//    else if (n == 1) {
//        // ֻ��һ��̨��ʱ��ֻ��һ������  
//        return 1;
//    }
//    else if (n == 2) {
//        // ������̨��ʱ������һ����1�������Σ�����һ����2������2������  
//        return 2;
//    }
//    else {
//        // ����n��̨�ף�С���ܿ��Դ�n-1����1��������Ҳ���Դ�n-2����2������  
//        // ��ˣ�n��̨�׵�����������n-1��̨�׺�n-2��̨�����������ĺ�  
//        return frogJump(n - 1) + frogJump(n - 2);
//    }
//}
//
//int main() {
//    int n;
//    printf("������̨�׵Ľ���n��");
//    scanf("%d", &n);
//
//    int ways = frogJump(n);
//    printf("С�����������һ�㣨��%d�㣩�Ĳ�ͬ��������Ϊ��%d\n", n, ways);
//
//    return 0;
//}