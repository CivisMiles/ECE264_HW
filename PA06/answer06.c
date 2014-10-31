#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "answer06.h"

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define MOVENORTH -1
#define MOVEEAST 1
#define MOVESOUTH 1
#define MOVEWEST -1
#define CANMOVE 1
#define NOMOVE 0

int findstart(char**, int);
int can_move(char**, int, int, int, int, int);
void move(int, int, int, int*, int*);
void printdirections(int, int);
void directions(char**, int, int, int, int, int, int, int);

void print_directions(char ** maze, int w, int h)
{
  //Initial Declarations
  int mazestart;
    
  //Statements
  mazestart = findstart(maze, w);
  directions(maze,h, w, 0, mazestart, 2, 0, 0);
  
  return;
}


int findstart(char ** maze, int w)
{
  //Initial Declarations
  int lcv = 1;
  
  //Statements
  while (maze[0][lcv] == 'X' && lcv < w)
  {
    lcv++;
  }
  
  return (lcv);
}


void directions(char** maze,int h,int w,int row,int col,int dir,int moves,int turn)
{
  //Initial Declaratrions
  int lcv;
  int canmove;
  int row2;
  int col2;
  int nomove = 0;

  //Statements
  maze[row][col] = '.';
  turn++;
  printf("turn = %d\n",turn);
  for (lcv = 0;lcv < 3;lcv++)
  {
    if (dir + lcv > 3)
	{
	  canmove = can_move(maze,h,w,row,col,dir + lcv - 3);
	  if (canmove)
      {
        move(dir + lcv - 3,row,col,&row2,&col2);
		if (dir + lcv == dir)
		{
		  directions(maze,h,w,row2,col2,dir + lcv - 3,moves + 1,turn);
		}
		else
		{
          printdirections(dir + lcv - 3, moves);
		  directions(maze,h,w,row2,col2,dir + lcv - 3,0,turn);
		}
	  }
	  else
	  {
        nomove++;
	  }
    }
	else
	{
	  canmove = can_move(maze,h,w,row,col,dir + lcv);
	  if (canmove)
      {
        move(dir + lcv,row,col,&row2,&col2);
		if (dir + lcv == dir)
		{
		  directions(maze,h,w,row2,col2,dir + lcv,moves + 1,turn);
		}
		else
		{
          printdirections(dir + lcv, moves);
		  directions(maze,h,w,row2,col2,dir + lcv,0,turn);
		}
	  }
	  else
	  {
	    nomove++;
	  }
	}
  }

  return;
}  


int can_move(char** maze,int h, int w, int row, int col, int dir)
{
  //Initial Declaratrions
  int poss;
  printf("can_move\n");

  //Statements
  if (dir == NORTH && col + MOVENORTH > 0 && maze[row][col + MOVENORTH] != 'X')
  {
    poss = 1;
  }
  else if (dir == EAST && row + MOVEEAST < w && maze[row + MOVEEAST][col] != 'X')
  {
    poss = 1;
  }
  else if (dir == SOUTH && col + MOVESOUTH < h && maze[row][col + MOVESOUTH] != 'X')
  {
    poss = 1;
  }
  else if (dir == WEST && row + MOVEWEST > 0 && maze[row + MOVEEAST][col] != 'X')
  {
    poss = 1;
  }

  if (poss)
  {
    return(CANMOVE);
  }
  else
  {
    return(NOMOVE);
  }
}


void move(int dir, int currow, int curcol,int* row,int* col)
{
  //Initial Declaratrions
  printf("move\n");

  //Statements
  if (dir == NORTH)
  {
    *row = currow + MOVENORTH;
  }
  else if (dir == EAST)
  {
    *col = curcol + MOVEEAST;
  }
  else if (dir == SOUTH)
  {
    *row = currow + MOVESOUTH;
  }
  else
  {
    *col = curcol + MOVEWEST;
  }
  
  return;
}


void printdirections(int dir, int num)
{
  //Initial Declaratrions
    
  //Statements
  if (dir == NORTH)
  {
    printf("N %d\n",num);
  }
  else if (dir == EAST)
  {
    printf("E %d\n",num);
  }
  else if (dir == SOUTH)
  {
    printf("S %d\n",num);
  }
  else
  {
    printf("W %d\n",num);
  }
  
  return;
}

