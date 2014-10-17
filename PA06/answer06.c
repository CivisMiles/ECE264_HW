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
int can_move(char**, int, int, int);
void move(int, int*, int*);
void printdirections(int, int);
void directions(char**, int, int, int, int)

void print_directions(char** maze, int w, int h)
{
  //Initial Declarations
  int mazestart;
    
  //Statements
  mazestart = findstart(**maze, w);
  directions(**maze, 0, mazestart, dir, 0);
  
  return;
}


int findstart(char** maze, int w)
{
  //Initial Declarations
  int lcv = 1;
  
  //Statements
  while (maze[0][lcv] = "X" && lcv < w)
  {
    lcv++
  }

  return (lcv);
}


void directions(char** maze, int row, int col, int dir, int moves)
{
  //Initial Declaratrions
  int canmove;
  int poss[4] = {0};
  int lcv;

  //Statements
  if (dir < 2)
  {
    poss[dir + 2] = 1;
  }
  else
  {
    poss[dir - 2] = 1;
  }

  canmove = can_move(**maze,poss,row,col,dir);
  if (canmove)
  {
    for (lcv = 0;lcv < 4;lcv++)
	{
	  if (poss[lcv] = 1)
	  {
	    move(lcv,*row,*col);
        directions(**maze,row,col,lcv,moves + 1);
		if (lcv < 2)
		{
		  move(lcv + 2,*row,*col);
		}
		else
		{
		  move(lcv - 2,*row,*col);
		}
      }
	}  
  }
  else
  {
    printdirections(dir,moves);
  } 

  return;
}  


int can_move(char** maze, int* pos ,int row, int col,)
{
  //Initial Declaratrions
  int moves = 0;
  
  //Statements
  if (col + MOVENORTH > 0 && maze[row][col + MOVENORTH] != "X")
  {
    pos[NORTH]++;
	moves++;
  }
  
  if (row + MOVEAST < WIDTH  && maze[row + MOVEAST][col] != "X")
  {
    pos[EAST]++;
	moves++;
  }
  
   if (col + MOVESOUTH < HIEGHT && maze[row][col + MOVESOUTH] != "X")
  {
    pos[SOUTH]++;
	moves++;
  } 
  
  if (row + MOVEWEST > 0 && maze[row + MOVEWEST][col] != "X")
  {
    pos[WEST]++;
	moves++;
  
  }

  if (moves == 1)
  {
    return(NOMOVE);
  }
  else
  {
    return(CANMOVE);
  }
}


void move(int dir, int* row,int* col)
{
  //Initial Declaratrions
  
  //Statements
  if (dir == NORTH)
  {
    row += MOVENORTH;
  }
  else if (dir == EAST)
  {
    col += MOVEEAST;
  }
  else if (dir == SOUTH)
  {
    row += MOVESOUTH;
  }
  else
  {
    col += MOVEWEST;
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

