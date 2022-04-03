#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int output = 2;

#define ROW 3
#define COL 3

//ÆåÅÌ
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);

//Âä×Ó
void PlayerMove(char board[ROW][COL], int row,int  col);
void ComputerMove(char board[ROW][COL],int row,int col);