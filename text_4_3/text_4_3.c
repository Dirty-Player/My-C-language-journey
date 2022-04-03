#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"



void game()
{
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board ,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		while(output>1)
		{
			//玩家下棋
			PlayerMove(board, ROW, COL);
			DisplayBoard(board, ROW, COL);
		} 
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

	}



}


void menu()
{
	printf("*********************************\n");
	printf("*****  1、play     0、exit  *****\n");
	printf("*********************************\n");
}


void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("开始游戏:\n");
				game();
				break;
			case 0:
				printf("退出游戏！\n");
				break;
			default:
				printf("选择错误，请重新选择：\n");
				break;
		
		}
	} while (input);
}

int main()
{
	text();
	return 0;
}