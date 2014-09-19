#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "answer03.h"


char * strcat_ex(char * * dest, int * n, const char * src)
{
  //Local Declarations
  int rpt = 0;

  //Statements
  if (* n < (strlen(* dest) + strlen(src) + 1))
  {
    char * temp = malloc(sizeof(char *) * (*n + 1));
    while (temp == NULL)
    {
      temp = malloc(sizeof(char *) * (*n));
	  rpt++;
	  if (rpt == 100)
	  {
	    printf("ERROR: out of memory for malloc");
		//return EXIT_FAILURE;
	  }
	}
    strcpy(temp, *dest);

	* n = strlen(* dest) + strlen(src) + 1;
    * dest = malloc(sizeof(char *) * (*n));
    while (* dest == NULL)
    {
      * dest = malloc(sizeof(char *) * (*n));
	  rpt++;
	  if (rpt == 100)
	  {
	    printf("ERROR: out of memory for malloc");
		//return EXIT_FAILURE;
	  }
    }
    strcpy(*dest, temp);
	free(temp);
  }
  
  strcat(* dest, src);
    
  return EXIT_SUCCESS;
}

/*
char * * explode(const char * str, const char * delims, int * arrLen)
{
  //Local Declarations
  
  
  //Statements
  
  
  return EXIT_SUCCESS;
}


char * implode(char * * strArr, int len, const char * glue)
{
  //Local Declarations
  
  
  //Statements
  
  
  return EXIT_SUCCESS;
}


void sortStringArray(char * * arrString, int len)
{
  //Local Declarations

  
  //Statements
  if (str[0] == 0)
  {
    return;
  }
  

  return;
}


void sortStringCharacters(char * str)
{
  //Local Declarations
  
  
  //Statements
  if (str[0] == 0)
  {
    return;
  }
  
  return;
}


void destroyStringArray(char * * strArr, int len)
{
  //Local Declarations
  
  
  //Statements
  
  
  return;
}
*/
