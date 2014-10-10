#include <stdlib.h>
#include <stdio.h>
#include "answer05.h"

//function declarations
void printarry(int *, int);
void partAllhelper(int *, int, int);
void partIncreaseHelper(int *, int, int);
void partDecreaseHelper(int *, int, int);
void partOdd(int *, int, int);
void partEven(int *, int, int);
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
  //partIncreaseHelper(arry, value, 0);
  free(arry);
  
  return;

}

void partitionDecreasing(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  //partDecreaseHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionOdd(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  //partOddHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionEven(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  //partEvenHelper(arry, value, 0);
  free(arry);
  
  return;
}


void partitionOddAndEven(int value)
{
  //Initial Declarations
  int * arry = malloc(sizeof(int) * value);
  
  //Statements
  //partOddEvenHelper(arry, value, 0);
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
  
  //Statments
  printf("= ");
  for (ind = 0;ind < len - 1;ind++)
  {
    printf("%d + ",arry[ind]);
  }
  printf("%d\n",arry[ind]);
  
  return;
}

