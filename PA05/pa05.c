#include <stdio.h>
#include <stdlib.h>
#include "answer05.h"

int main()
{
  //Initial Declarations
  int arr[8] = {5,1,2,7,4,8,3,10};
  int len = 8;
  int val;
  int lcv;

  //Statements
  /*
  //testing partitionAll
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionAll(%d)\n",val);
    partitionAll(val);
  }
  */
  /*
  //testing partitionIncreasing
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionIncreasing(%d)\n",val);
    partitionIncreasing(val);
  }
  */
  
  ////testing partitionDecreasing
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionDecreasing(%d)\n",val);
    partitionDecreasing(val);
  }
  
  /*
  //testing partitionOdd
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionOdd(%d)\n",val);
    partitionOdd(val);
  }
  */
  /*
  //testing partitionEven
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionEven(%d)\n",val);
    partitionEven(val);
  }
  */
  /*
  //testing partitionOddAndEven
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionOddAndEven(%d)\n",val);
    partitionOddAndEven(val);
  }
  */
  /*
  //testing partitionPrime
  for (lcv = 0;lcv < len ;lcv++)
  {
    val = arr[lcv];
    printf("\npartitionPrime(%d)\n",val);
    partitionPrime(val);
  }
  */
  
  return EXIT_SUCCESS;
}

