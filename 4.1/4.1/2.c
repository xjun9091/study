#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main()
//{
//	printf("%.5s\n", "1234345");
//	return 0;
//}

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);    
            if (a - b == 0)
                printf("%d=%d\n", a, b);
            else if (a - b > 0)
                printf("%d>%d\n", a, b);
            else
                printf("%d<%d\n", a, b);       
    return 0;
}