#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int main() {

    int num1, num2;

    int op;

    printf("请输入两个整数：\n");

    scanf("%d %d", &num1, &num2);

    do {

        printf("\n菜单：\n");

        printf("1. 加法\n");

        printf("2. 减法\n");

        printf("3. 乘法\n");

        printf("4. 除法\n");

        printf("5. 退出\n");

        printf("请输入操作（1-5）：");

        scanf(" %d", &op);

        switch (op) {

        case 1:

            printf("%d + %d = %d\n", num1, num2, num1 + num2);

            break;

        case 2:

            printf("%d - %d = %d\n", num1, num2, num1 - num2);

            break;

        case 3:

            printf("%d * %d = %d\n", num1, num2, num1 * num2);

            break;

        case 4:

            if (num2 != 0) {

                printf("%d / %d = %.2f\n", num1, num2, (double)num1 / num2);

            }
            else {

                printf("除数不能为0！\n");

            }

            break;

        case 5:

            printf("退出程序。\n");

            break;

        default:

            printf("无效的操作，请重新输入。\n");

            break;

        }

    } while (op != 5);

    return 0;
}