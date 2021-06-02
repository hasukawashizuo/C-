#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3//定义行数
#define COL 3//定义列数
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//判断四种状态
//玩家赢  '*'
//电脑赢  '#'
//平局  'Q'
//游戏继续  'C'
char IsWin(char board[ROW][COL], int row, int col);