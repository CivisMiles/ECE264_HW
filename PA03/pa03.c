#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "answer03.h"


int main()
{ 
  //testing strcat_ex
  printf("Testing strcat_ex\n");
  int test = 1;

  char dest[5] = "Go\0";		const char * src= " Purdue\0";		 int n = 5;  
  printf("Case %d:\tn = %d\tSolution: '%s%s'",test,n,dest,src);
  /*strcat_ex(&dest, &src, &n);		printf("\tResults: n = %d '%s'",n,dest);
  //free(dest);
  //free(src);*/
  test++;
  
  char dest1[3] = "Go\0";		const char * src1= " Boilermakers\0";		n = 3;
  printf("\nCase %d:\tn = %d\tSolution: '%s%s'",test,n,dest1,src1);
  /*strcat_ex(&dest, &src, &n);		printf("\tResults: n = %d '%s'",n,dest);
  free(dest);		free(src);*/
  test++;
  
  char dest2[13] = "Beat\0 Purdue";		const char * src2= " IU\0";		n = 13;
  printf("\nCase %d:\tn = %d\tSolution: '%s%s'",test,n,dest2,src2);
  //strcat_ex(&dest, &src, &n);		printf("\tResults: n = %d '%s'",n,dest);
  test++;
  
  char dest3[6] = "Th\0is";		const char * src3= "is homework sucks";		n = 6;
  printf("\nCase %d:\tn = %d\tSolution: '%s%s'",test,n,dest3,src3);
  /*strcat_ex(&dest, &src, &n);		printf("\tResults: n = %d '%s'",n,dest);
  free(dest);		free(src);*/
  test++;
  
  /*
  //testing explode
  printf("\nTesting explode\n");
  
  explode();		printf("");
  
  explode();		printf("");
  
  explode();		printf("");
  
  explode();		printf("");
  
  //testing implode
  printf("\nTesting implode\n");
  
  implode();		printf("");
  
  implode();		printf("");
  
  implode();		printf("");
  
  implode();		printf("");
  
  //testing sortStringArray
  printf("\nTesting sortStringArray\n");
  
  sortStringArray();		printf("");
  
  sortStringArray();		printf("");
  
  sortStringArray();		printf("");
  
  sortStringArray();		printf("");
  
  //testing sortStringCharacters
  printf("\nTesting sortStringCharacters\n");
  
  sortStringCharacters();		printf("");
  
  sortStringCharacters();		printf("");
  
  sortStringCharacters();		printf("");
  
  sortStringCharacters();		printf("");
  
  //testing destroyStringArray
  printf("\nTesting destroyStringArray\n\n");
  
  destroyStringArray();		printf("");
  
  destroyStringArray();		printf("");
  
  destroyStringArray();		printf("");
  
  destroyStringArray();		printf("");
  */

  return EXIT_SUCCESS;
}

