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
  int lcv = 0;
  int len;
  char * ptr;
  
  //Statements
  len = my_strlen(str);
  while (str[lcv] != (char)ch && lcv <= len)
  {
	lcv++;
  }
  ptr = str[lcv];
  return (ptr);
}


char * my_strrchr(const char * str, int ch)
{
  //Local Declarations
  //int len; //length of the string
  
  
  //Statements
  

  
  return (EXIT_SUCCESS);
}

/*
char * my_strstr(const char * haystack, const char * needle)
{
  //Local Declarations
  char * r = &haystack[0]; 
  
  //Statements
  
  
  return (*r);
}
*/

char * my_strcat(char * dest, const char * src)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}


int my_isspace(int ch)
{
  //Local Declarations
  int result = 0;

  //Statements
  switch (ch)
  {
    case '\n':
	  result = 1;
	  break;
	case '\t':
	  result = 1;
	  break;
	case '\r':
	  result = 1;
	  break;
	case '\v':
	  result = 1;
	  break;
	case '\f':
	  result = 1;
	  break;
	case ' ':
	  result = 1;
	  break;
  }

  return (result);
}


int my_atio(const char * str)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}

