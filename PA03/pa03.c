#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "answer03.h"


int main()
{ 
  int test = 1;

  //testing strcat_ex
  printf("Testing strcat_ex\n");

  int n = 3;
  char * dest = malloc(sizeof(char *) * n);
  strcpy(dest, "Go");
  char * src = malloc(sizeof(char *) * 8);
  strcpy(src, " Purdue");
  printf("\nCase %d:\tn = %d\t*dest = %s\tsrc = %s\n",test,n,dest,src);
  printf("Solution:\tn = 10\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &n, src);
  printf("Results:\tn = %d\t'%s'\n",n,dest);
  free(dest);
  free(src);
  test++;
  
  n = 3;
  dest = malloc(sizeof(char *) * n);
  strcpy(dest, "Go");
  src = malloc(sizeof(char *) * 14);
  strcpy(src, " Boilermakers");
  printf("\nCase %d:\tn = %d\t*dest = %s\tsrc = %s\n",test,n,dest,src);
  printf("Solution:\tn = 16\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &n, src);
  printf("Results:\tn = %d\t'%s'\n",n,dest);
  free(dest);
  free(src);
  test++;
   
  n = 5;
  dest = malloc(sizeof(char *) * n);
  strcpy(dest, "Beat");
  src = malloc(sizeof(char *) * 3);
  strcpy(src, "IU");
  printf("\nCase %d:\tn = %d\t*dest = %s\tsrc = %s\n",test,n,dest,src);
  printf("Solution:\tn = 13\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &n, src);
  printf("Results:\tn = %d\t'%s'\n",n,dest);
  free(dest);
  free(src);
  test++;
  
  n = 6;
  dest = malloc(sizeof(char *) * n);
  strcpy(dest, "Th");
  src = malloc(sizeof(char *) * 18);
  strcpy(src, "is homework sucks");
  printf("\nCase %d:\tn = %d\t*dest = %s\tsrc = %s\n",test,n,dest,src);
  printf("Solution:\tn = 20\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &n, src);
  printf("Results:\tn = %d\t'%s'\n",n,dest);
  free(dest);
  free(src);
  test++;
 
  printf("\nTesting of strcat_ex complete\n");

  /*
  //testing explode
  test = 1;

  printf("\nTesting explode\n");
  
  printf("Case %d: Solution: ",test);
  explode();
  printf("");
  
  printf("Case %d: Solution: ",test);
  explode();
  printf("");
  
  printf("Case %d: Solution: ",test);
  explode();
  printf("");
  
  printf("Case %d: Solution: ",test);
  explode();
  printf("");
  
  printf("\nTesting of explode complete\n");
  
  //testing implode
  test = 1;
  
  printf("\nTesting implode\n");
  
  printf("Case %d: Solution: ",test);
  implode();
  printf("");
  
  printf("Case %d: Solution: ",test);
  implode();
  printf("");
  
  printf("Case %d: Solution: ",test);
  implode();
  printf("");
  
  printf("Case %d: Solution: ",test);
  implode();
  printf("");
  
  printf("\nTesting of implode complete\n");

  //testing sortStringArray
  test = 1;
  
  printf("\nTesting sortStringArray\n");
  
  printf("Case %d: Solution: ",test);
  sortStringArray();
  printf("");
  
  printf("Case %d: Solution: ",test);
  sortStringArray();
  printf("");
  
  printf("Case %d: Solution: ",test);
  sortStringArray();
  printf("");
  
  printf("Case %d: Solution: ",test);
  sortStringArray();
  printf("");
  
  printf("\nTesting of sortStringArray complete\n");

  //testing sortStringCharacters
  test = 1;

  printf("\nTesting sortStringCharacters\n");
  
  printf("Case %d: Solution: ",test);
  sortStringCharacters();
  printf("");
  
  printf("Case %d: Solution: ",test);
  sortStringCharacters();
  printf("");
  
  printf("Case %d: Solution: ",test);
  sortStringCharacters();
  printf("");
  
  printf("Case %d: Solution: ",test);
  sortStringCharacters();
  printf("");
  
  printf("\nTesting of sortStringCharacters complete\n");
  
  //testing destroyStringArray
  test = 1;

  printf("\nTesting destroyStringArray\n\n");
  
  printf("Case %d: Solution: ",test);
  destroyStringArray();
  printf("");
  
  printf("Case %d: Solution: ",test);
  destroyStringArray();
  printf("");
  
  printf("Case %d: Solution: ",test);
  destroyStringArray();
  printf("");
  
  printf("Case %d: Solution: ",test);
  destroyStringArray();
  printf("");
  
  printf("\nTesting of destroyStringArray complete\n");
  */

  return EXIT_SUCCESS;
}

