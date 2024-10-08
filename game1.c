#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 3
void InitBoard(char board[ROWS][COLS], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printfBoard(char board[ROWS][COLS], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < row - 1)
        {
            printf("---+---+---\n");
        }
    }
}

char istrue(char board[ROWS][COLS], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return board[0][2];
    }
    return 'F';
}

int main()
{
    char board[ROWS][COLS];
    InitBoard(board, ROWS, COLS);
    printfBoard(board, ROWS, COLS);
    scanf("%c", &board[0][0]);
    printfBoard(board, ROWS, COLS);
    printf("%c\n", istrue(board, ROWS, COLS));
    return 0;
}                           