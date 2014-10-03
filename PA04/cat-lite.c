#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * * argv)
{
  //Initial Declarations
  int lcv;
  int run = 0;
  
  //Statements
  for (lcv = 1;lcv < argc;lcv++);
  {
    if (strcmp(argv[lcv],"--help") == 0)
	{
	  printf(""
	         ""
			 ""
			 "\n");

      return EXIT_SUCCESS;
	}
	else
	{
	  run = 1;
	}
  }
  
  if (run)
  {
    
    
  }


  return EXIT_SUCCESS;
}

