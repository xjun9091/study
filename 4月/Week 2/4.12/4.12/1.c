#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int main() {

    int num1, num2;

    int op;

    printf("����������������\n");

    scanf("%d %d", &num1, &num2);

    do {

        printf("\n�˵���\n");

        printf("1. �ӷ�\n");

        printf("2. ����\n");

        printf("3. �˷�\n");

        printf("4. ����\n");

        printf("5. �˳�\n");

        printf("�����������1-5����");

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

                printf("��������Ϊ0��\n");

            }

            break;

        case 5:

            printf("�˳�����\n");

            break;

        default:

            printf("��Ч�Ĳ��������������롣\n");

            break;

        }

    } while (op != 5);

    return 0;
}