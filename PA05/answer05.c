/***********************************************************
* Code adapted from Professor Yung-Hsiang Lu               *
* and taken from "Intermediate C Programming"              *
***********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "answer05.h"

//function declarations
void printarry(int *, int);
void partAllHelper(int *, int, int);
void partIncreaseHelper(int *, int, int);
void partDecreaseHelper(int *, int, int);
void partOddHelper(int *, int, int);
void partEvenHelper(int *, int, int);
void partOddEvenHelper(int *, int, int);
void partPrimeHelper(int *, int, int);

void partitionAll(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partAllHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionIncreasing(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partIncreaseHelper(arry, value, 0);
  free(arry);
  
  return;

}

void partitionDecreasing(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partDecreaseHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionOdd(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partOddHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionEven(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partEvenHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionOddAndEven(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partOddEvenHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionPrime(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  partPrimeHelper(arry, value, 0);
  free(arry);
  
  return;
}


void printarry(int * arry,int len)
{
  //Initial Declaratrions
  int ind;
  
  //Statements
  printf("= ");
  for (ind = 0;ind < len - 1;ind++)
  {
    printf("%d + ",arry[ind]);
  }
  printf("%d\n",arry[ind]);
  
  return;
}


void partAllHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;

  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  for(val = 1 ;val <= value; val++)
  {
    arry[ind] = val;
	partAllHelper(arry, value - val, ind + 1);
  }

  return;
}


void partIncreaseHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;
  int min = 1;

  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  if (ind != 0)
  {
    min = arry[ind - 1] + 1;
  }

  for(val = min;val <= value; val++)
  {
    arry[ind] = val;
	partIncreaseHelper(arry, value - val, ind + 1);
  }
  
  return;
}


void partDecreaseHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;
  int max = value;

  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  if (ind != 0)
  {
    max = arry[ind - 1] - 1;
  }

  for(val = max;val <= value; val--)
  {
    arry[ind] = val;
	partDecreaseHelper(arry, value - val, ind + 1);
  }
  
  return;
}


void partOddHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;

  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  for(val = 1 ;val <= value; val += 2)
  {
    arry[ind] = val;
	partOddHelper(arry, value - val, ind + 1);
  }
  
  return;
}


void partEvenHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;

  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  for(val = 2 ;val <= value; val += 2)
  {
    arry[ind] = val;
	partEvenHelper(arry, value - val, ind + 1);
  }
  
  return;
}


void partOddEvenHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;
  
  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  for(val = 1 ;val <= value; val++)
  {
    int valid = 0;
    if (ind == 0)
	{
	  valid = 1;
	}
	else
	{
      valid = (arry[ind - 1] % 2) != (val % 2);
	}
    if (valid == 1)
	{
	  arry[ind] = val;
	  partOddEvenHelper(arry, value - val, ind + 1);
	}
  }
  
  return;
}


void partPrimeHelper(int * arry, int value, int ind)
{
  //Initial Declarations
  int val;
  int check;
  int lcv;

  //Statements
  //Base Case
  if (value == 0)
  {
    printarry(arry, ind);
	return;
  }
  
  //Recursive
  for(val = 2 ;val <= value; val++)
  {
	for (lcv = 2 ;lcv * lcv <= val;lcv++)
	{
      if (val % lcv == 0)
	  {
	    check++;
	  }
	}

	if (check != 0)
	{
	  arry[ind] = val;
	  partPrimeHelper(arry, value - val, ind + 1);
    }
    check = 0;
  }
  
  return;
}

