#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <windows.h>
int main()
{
    float x, y, z;
    for (y = 1.5; y > -1.5; y -= 0.1)
    {
        for (x = -1.5; x < 1.5; x += 0.05)
        {
            z = x * x + y * y - 1;
            putchar(z * z * z - x * x * y * y * y <= 0.0f ? '*' : ' ');
        }
        system("color 0c");
        putchar('\n');
    }
    printf(" !\n");
    return 0;
}