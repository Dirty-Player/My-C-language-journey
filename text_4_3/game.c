#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"


//棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}



//落子
void PlayerMove(char board[ROW][COL], int row, int  col)
{
	int x = 0;
	int y = 0;
	int output1 = 0;
	printf("玩家走：>\n");
	do
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				output = 0;
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入：>\n");
				output1 = 1;
				break;
			}
		}
	} while (output1);
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int output = 1;
	printf("电脑走:>\n");
	while (1)
	{	
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			/*output = 0;*/
			break;
		}
		//else
		//{
		//	output = 1;
		//}
	}
}