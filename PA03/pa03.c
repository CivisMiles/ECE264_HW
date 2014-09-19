#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "answer03.h"


int main()
{ 
  int test = 1;

  //testing strcat_ex
  printf("Testing strcat_ex\n");

  int len = 3;
  char * dest = malloc(sizeof(char *) * len);
  strcpy(dest, "Go");
  char * src = malloc(sizeof(char *) * 8);
  strcpy(src, " Purdue");
  printf("\nCase %d:\tlen = %d\t*dest = %s\tsrc = %s\n",test,len,dest,src);
  printf("Solution:\tlen = 10\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &len, src);
  printf("Results:\tlen = %d\t'%s'\n",len,dest);
  free(dest);
  free(src);
  test++;
  
  len = 3;
  dest = malloc(sizeof(char *) * len);
  strcpy(dest, "Go");
  src = malloc(sizeof(char *) * 14);
  strcpy(src, " Boilermakers");
  printf("\nCase %d:\tlen = %d\t*dest = %s\tsrc = %s\n",test,len,dest,src);
  printf("Solution:\tlen = 16\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &len, src);
  printf("Results:\tlen = %d\t'%s'\n",len,dest);
  free(dest);
  free(src);
  test++;
   
  len = 5;
  dest = malloc(sizeof(char *) * len);
  strcpy(dest, "Beat");
  src = malloc(sizeof(char *) * 3);
  strcpy(src, "IU");
  printf("\nCase %d:\tlen = %d\t*dest = %s\tsrc = %s\n",test,len,dest,src);
  printf("Solution:\tlen = 13\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &len, src);
  printf("Results:\tlen = %d\t'%s'\n",len,dest);
  free(dest);
  free(src);
  test++;
  
  len = 6;
  dest = malloc(sizeof(char *) * len);
  strcpy(dest, "Th");
  src = malloc(sizeof(char *) * 18);
  strcpy(src, "is homework sucks");
  printf("\nCase %d:\tlen = %d\t*dest = %s\tsrc = %s\n",test,len,dest,src);
  printf("Solution:\tlen = 20\t'%s%s'\n",dest,src);
  strcat_ex(&dest, &len, src);
  printf("Results:\tlen = %d\t'%s'\n",len,dest);
  free(dest);
  free(src);
  test++;
 
  printf("\nTesting of strcat_ex complete\n");

  /*
  //testing explode & implode
  test = 1;

  int len = ;
  char str = ;
  char glue = ;
  printf("\nTesting explode & implode\n");
  printf("Case %d:\tBefore explode: %s",test,str);
  char * * strArr = explode(str, delims, &len);
  printf("After explode/before implode: %s",*strArr);
  str = implode(*strArr, len, glue);
  printf("After implode: %s",str);
  test++;
 
  printf("\nTesting of explode and implode complete\n");


  //testing sortStringArray
  test = 1;
  
  printf("\nTesting sortStringArray\n");
  
  len = ;
  printf("Case %d: Solution: ",test);
  sortStringArray(*arrString, len);
  printf("Results: ");
  test++;
  
 printf("\nTesting of sortStringArray complete\n");


  //testing sortStringCharacters
  test = 1;

  printf("\nTesting sortStringCharacters\n");
  
  printf("Case %d: Solution: ",test);
  sortStringCharacters(str);
  printf("Results: ");
  test++;
 
  printf("\nTesting of sortStringCharacters complete\n");


  //testing destroyStringArray
  test = 1;

  printf("\nTesting destroyStringArray\n\n");
  
  printf("Case %d: Solution: ",test);
  destroyStringArray(*strArr, len);
  printf("Results: ");
  test++;
 
  printf("\nTesting of destroyStringArray complete\n");
  */

  return EXIT_SUCCESS;
}

