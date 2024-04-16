#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>

#define BOARD_SIZE 15

char board[BOARD_SIZE][BOARD_SIZE];

// ��ʼ������
void init_board() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

// ��ӡ����
void print_board() {
    printf("  ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%2d", i);
    }
    printf("\n");

    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%2d", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%2c", board[i][j]);
        }
        printf("\n");
    }
}

// ����Ƿ�����һ�ʤ
bool check_win(int row, int col, char player) {
    int count = 0;

    // ���ˮƽ����
    for (int i = col - 4; i <= col + 4; i++) {
        if (i >= 0 && i < BOARD_SIZE && board[row][i] == player) {
            count++;
            if (count >= 5) return true;
        }
        else {
            count = 0;
        }
    }

    // ��鴹ֱ����
    count = 0;
    for (int i = row - 4; i <= row + 4; i++) {
        if (i >= 0 && i < BOARD_SIZE && board[i][col] == player) {
            count++;
            if (count >= 5) return true;
        }
        else {
            count = 0;
        }
    }

    // ������ϵ�����б�߷���
    count = 0;
    for (int i = -4; i <= 4; i++) {
        int r = row + i;
        int c = col + i;
        if (r >= 0 && r < BOARD_SIZE && c >= 0 && c < BOARD_SIZE && board[r][c] == player) {
            count++;
            if (count >= 5) return true;
        }
        else {
            count = 0;
        }
    }

    // ������µ�����б�߷���
    count = 0;
    for (int i = -4; i <= 4; i++) {
        int r = row - i;
        int c = col + i;
        if (r >= 0 && r < BOARD_SIZE && c >= 0 && c < BOARD_SIZE && board[r][c] == player) {
            count++;
            if (count >= 5) return true;
        }
        else {
            count = 0;
        }
    }

    return false;
}

int main() {
    int row, col;
    char player = 'X'; // ��ʼʱ���X����

    init_board();

    printf("��ӭ������������Ϸ��\n");

    while (true) {
        print_board();
        printf("��� %c����������Ҫ�����λ�ã��� �У���", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != '-') {
            printf("��Ч��λ�ã����������롣\n");
            continue;
        }

        board[row][col] = player;

        if (check_win(row, col, player)) {
            print_board();
            printf("��� %c ��ʤ��\n", player);
            break;
        }

        // �л����
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
