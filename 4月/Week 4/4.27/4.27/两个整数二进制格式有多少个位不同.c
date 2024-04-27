#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() 
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    { 
        int i = a ^ b;
        int count = 0;
        while (i)
        {
            i = i & (i - 1);
            count++;
        }
        printf("%d", count);
    }
    return 0;
}