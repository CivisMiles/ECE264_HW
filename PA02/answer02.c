#include <stdio.h>
#include "answer02.h"
#include <stdlib.h>

size_t my_strlen(const char * str)
{
  //Local Declarations
  int len = 0; //length of the string
  
  //Statements
  while (str[len] != 0)
  {
    len++;
  }
  
  return (len);
}


int my_countchar(const char * str, char ch)
{
  //Local Declarations
  int lcv = 0; //loop control variable
  int count = 0; //count of the selected character in the string

  //Statements
  while (str[lcv] != 0)
  {
    if (str[lcv] == ch)
	{
	  count++;
	}
  lcv++;
  }
  
  return (count);
}


char * my_strchr(const char * str, int ch)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}


char * my_strrchr(const char * str, int ch)
{
  //Local Declarations
  int len; //length of the string
  
  
  //Statements
  

  
  return (EXIT_SUCCESS);
}


char * my_strstr(const char * haystack, const char * needle)
{
  //Local Declarations
  char dest[50] = "(null)"
  int lcv1 = 0; //loop control variable 1
  int lcv2 = 0; //loop control variable 2
  int nlen;
  int hlen;
  
  //Statements
  if (needle[0] != 0)
  {
    nlen = my_strlen(needle);
    hlen = my_strlen(haystack);
	nlen--;
    
	while (lcv1 < hlen && lcv2 <= nlen)
	{
      if (haystack[lcv1] == needle[lcv2])
	  {
        lcv2++;
	  }
	  else
	  {
	    lcv2 = 0;
      }
	  lcv1++;
	}
    
	lcv2 = 0;

	while (lcv1 < hlen)
	{
      dest[lcv2] = haystack[lcv1];
	  lcv1++; lcv2++;
	}
    
  }
  
  else if (needle[0] == 0)
  {
    while (haystack[lcv1] !=0)
	{
      d[lcv] = haystack[lcv1];
	  lcv1++;
	}
  d[lcv1] = 0;
  }
  
  return ();
}


char * my_strcpy(char * dest, const char * src)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}


char * my_strcat(char * dest, const char * src)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}


int my_isspace(int ch)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}


int my_atio(const char * str)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}

