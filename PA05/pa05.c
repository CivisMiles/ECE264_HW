#include <stdio.h>
#include <stdlib.h>
#include "answer05.h"

int main()
{
  //Initial Declarations
  int val;

  //Statements
  //testing partitionAll
  val = 7;
  printf("\npartitionAll(%d)\n",val);
  partitionAll(val);
  val = 2;
  printf("\npartitionAll(%d)\n",val);
  partitionAll(val);
  val = 1;
  printf("\npartitionAll(%d)\n",val);
  partitionAll(val);
  val = 5;
  printf("\npartitionAll(%d)\n",val);
  partitionAll(val);
  val = 4;
  printf("\npartitionAll(%d)\n",val);
  partitionAll(val);
  val = 3;
  printf("\npartitionAll(%d)\n",val);
  partitionAll(val);
  /*
  //testing partitionIncreasing
  val = 1;
  printf("\npartitionIncreasing(%d)\n",val);
  partitionIncreasing(val);
  
  //testing partitionDecreasing
  val = 1;
  printf("\npartitionDecreasing(%d)\n",val);
  partitionDecreasing(val);
  
  //testing partitionOdd
  val = 1;
  printf("\npartitionOdd(%d)\n",val);
  partitionOdd(val);
  
  //testing partitionEven
  val = 1;
  printf("\npartitionEven(%d)\n",val);
  partitionEven(val);
  
  //testing partitionOddAndEven
  val = 1;
  printf("\npartitionOddAndEven(%d)\n",val);
  partitionOddAndEven(val);
    */
  //testing partitionPrime
  val = 1;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 17;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 10;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 7;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 2;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 4;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 3;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  val = 5;
  printf("\npartitionPrime(%d)\n",val);
  partitionPrime(val);
  
  return EXIT_SUCCESS;
}

