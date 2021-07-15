#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9	
		int y = rand() % col + 1;
		if (board[x][y] == '0')//这个位置是否布置雷
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
	mine[x - 1][y - 1] +
	mine[x][y - 1] +
	mine[x + 1][y - 1] +
	mine[x + 1][y] +
	mine[x + 1][y + 1] +
	mine[x][y + 1] +
	mine[x - 1][y + 1] - 8 * '0';//字符0不是数字0！！！
}
void zhankai(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		if (mine[x - 1][y] +
			mine[x - 1][y - 1] +
			mine[x][y - 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] +
			mine[x + 1][y] +
			mine[x - 1][y + 1] - 8 * '0' == 0)
		{
			show[x - 1][y] = ' ';
			show[x - 1][y - 1] = ' ';
			show[x][y - 1] = ' ';
			show[x + 1][y - 1] = ' ';
			show[x + 1][y] = ' ';
			show[x + 1][y + 1] = ' ';
			show[x + 1][y] = ' ';
			show[x - 1][y + 1] = ' ';
			show[x][y] = ' ';
			zhankai(mine, show, x - 1, y);
			zhankai(mine, show, x - 1, y - 1);
			zhankai(mine, show, x, y - 1);
			zhankai(mine, show, x + 1, y - 1);
			zhankai(mine, show, x + 1, y);
			zhankai(mine, show, x + 1, y + 1);
			zhankai(mine, show, x + 1, y);
			zhankai(mine, show, x - 1, y + 1);
		}
		else
			show[x][y] = get_mine_count(mine, x, y) + '0';
	}

}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=71
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x < row && y >= 1 && y < col)
		{
			//坐标合法
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你是啥比\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算x，y坐标周围有几个雷
				zhankai(mine,show,x,y);
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标错误，你是啥比？\n");
			getchar();
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("win  你也没有那么啥比嘛\n");
		DisplayBoard(mine, row, col);	
	}
}
//展开功能要用到递归