#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>

#define BOARD_SIZE 15

char board[BOARD_SIZE][BOARD_SIZE];

// 初始化棋盘
void init_board() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

// 打印棋盘
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

// 检查是否有玩家获胜
bool check_win(int row, int col, char player) {
    int count = 0;

    // 检查水平方向
    for (int i = col - 4; i <= col + 4; i++) {
        if (i >= 0 && i < BOARD_SIZE && board[row][i] == player) {
            count++;
            if (count >= 5) return true;
        }
        else {
            count = 0;
        }
    }

    // 检查垂直方向
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

    // 检查左上到右下斜线方向
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

    // 检查左下到右上斜线方向
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
    char player = 'X'; // 开始时玩家X先下

    init_board();

    printf("欢迎来到五子棋游戏！\n");

    while (true) {
        print_board();
        printf("玩家 %c，请输入你要下棋的位置（行 列）：", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != '-') {
            printf("无效的位置，请重新输入。\n");
            continue;
        }

        board[row][col] = player;

        if (check_win(row, col, player)) {
            print_board();
            printf("玩家 %c 获胜！\n", player);
            break;
        }

        // 切换玩家
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
