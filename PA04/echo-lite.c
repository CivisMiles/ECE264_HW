#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * * argv )
{
  //Initial Declarations
  int lcv;
  int run;
  int len = 0;

  //Statements
  for (lcv = 1;lcv < argc;lcv++)
  {
    len = len + strlen(argv[lcv]);   
  }
 
  char * str = malloc(sizeof(char *) * (len + argc));
    
  for (lcv = 1;lcv < argc;lcv++)
  {
    strcat(str,argv[lcv]);

    if (lcv < argc - 1)
    {
	  strcat(str," ");
	}
  } 
  
  printf("%s\n",str);
  
  free (str);
  
  return EXIT_SUCCESS;
}

