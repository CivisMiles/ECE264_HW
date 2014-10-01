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
  //int len; //length of the string
  
  
  //Statements
  

  
  return (EXIT_SUCCESS);
}


char * my_strstr(const char * haystack, const char * needle)
{
  //Local Declarations
  char * r = &haystack[0]; 
  
  //Statements
  
  
  return (*r);
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
  int lcv = 0;
  int len;
  int result = 0;

  //Statements
  len = my_strlen(ch)

  while (lcv <= len)
  {
    if (ch[lcv] == "\t" || ch[lcv] == "\v" || ch[lcv] == "\f" || ch[lcv] == "\n" || ch[lcv] == "\r" || ch[lcv] == " ")
	{
      result = 1;
	}
  }


 return (result);
}


int my_atio(const char * str)
{
  //Local Declarations
  
  
  //Statements
  
  
  return (EXIT_SUCCESS);
}

