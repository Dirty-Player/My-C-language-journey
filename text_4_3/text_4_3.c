#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"



void game()
{
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board ,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		while(output>1)
		{
			//�������
			PlayerMove(board, ROW, COL);
			DisplayBoard(board, ROW, COL);
		} 
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

	}



}


void menu()
{
	printf("*********************************\n");
	printf("*****  1��play     0��exit  *****\n");
	printf("*********************************\n");
}


void text()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("��ʼ��Ϸ:\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		
		}
	} while (input);
}

int main()
{
	text();
	return 0;
}