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
      free(temp);
	  temp = malloc(sizeof(char *) * (*n));
	  rpt++;
	  if (rpt == 100)
	  {
	    printf("ERROR: out of memory for malloc");
		//return (b);
	  }
	}
    strcpy(temp, *dest);

	* n = strlen(* dest) + strlen(src) + 1;
    * dest = malloc(sizeof(char *) * (*n));
    while (* dest == NULL)
    {
      free(* dest);
	  * dest = malloc(sizeof(char *) * (*n));
	  rpt++;
	  if (rpt == 100)
	  {
	    printf("ERROR: out of memory for malloc");
		//return (b);
	  }
    }
    strcpy(*dest, temp);
	free(temp);
  }
  
  strcat(* dest, src);
    
  return EXIT_SUCCESS;
}

///*
char * * explode(const char * str, const char * delims, int * arrLen)
{
  //Local Declarations
  int lcv1;
  int lcv2;
  int lcv3 = 1;
  int numarr = 1;
  int numdelim;
  int lenstr;
  int delind;
  
  //Statements
  lenstr = strlen(str);
  numdelim = strlen(delims);
  delind = malloc(sizeof(int) * (lenstr + 1));
  while (delind == NULL)
  {
    free(delind);
	delind = malloc(sizeof(char *) * (*n));
    rpt++;
    if (rpt == 100)
	{
	  printf("ERROR: out of memory for malloc");
      return (b);
	}
  }
  delind[0] = 0;
  
  for (lcv1 = 0;lcv1 <= lenstr;lcv1++)
  {
    for (lcv2 = 0;lcv2 <= numdelim;lcv2++)
	{
	  if (str[lcv] == delims(lcv2))
  	  {
	    delind[lcv3] = lcv1;
		numarr++;
		lcv3++;
	  }
	}
  }
  
  if (numarr > 1)
  {
    strArr = malloc(sizeof(char *) * (numarr));
	while (strArr == NULL)
    {
      free(strArr);
	  strArr = malloc(sizeof(char *) * (*n));
	  rpt++;
	  if (rpt == 100)
	  {
	    printf("ERROR: out of memory for malloc");
		return (b);
	  }
    }
    
	lcv1 = 0;
	lcv2 = 0;
	while (lcv1 < numarry)
	{
      char * str[lcv1] = malloc(sizeof(char * ) * (delind[lcv2 + 1] - delind[lcv2]));
	  lcv1++;
	  lcv2++;
	}
    
  }
  else
  {
    strArr = malloc(sizeof(char*));
	char * strArr[0] = malloc(sizeof(char*) * (lenstr + 1));
	strcpy(strArr[0],str);
  }
  
  
  return * strArr;
}


char * implode(char * * strArr, int len, const char * glue)
{
  //Local Declarations
  
  
  //Statements
  
  
  
  return "b";// str;
()}
//*/
/*
void sortStringArray(char * * arrString, int len)
{
  //Local Declarations

  
  //Statements
  //if (str[0] == 0)
  //{
  //  return;
  //}
  

  return;
}


void sortStringCharacters(char * str)
{
  //Local Declarations
  
  
  //Statements
  //if (str[0] == 0)
  //{
  //  return;
  //}
  
  return;
}


void destroyStringArray(char * * strArr, int len)
{
  //Local Declarations
  
  
  //Statements

  
  
  return;
}
*/
