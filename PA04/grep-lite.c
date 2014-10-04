#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FAIL 2
#define NO_MATCH 1
#define TRUE 1
#define FALSE 0

int main(int argc, char * * argv)
{
  //Initial Declarations
  int ind = 1;
  
  //Statements
  if (strcmp(argv[ind],"--help") == 0)
  {
    printf("\nUsage: grep-lite [OPTION]... PATTERN\n"
           "Search for PATTERN in standard input. PATTERN is a\n"
		   "string. grep-lite will search standard input line by\n"
		   "line, and (by default) print out those lines which\n"
		   "contain PATTERN as a substring.\n"
	 	   "\n\t-v, --invert-match\tprint non-matching lines\n"
	 	   "\t-n, --line-number\tprint line numbers with output\n"
	 	   "\t-q, --quiet\t\tsuppress all output\n"
	 	   "\nExit status is 0 if any line is selected, 1 otherwise;"
		   "\nif any error occurs, then the exit status is 2.\n"
	 	   "\n");
       
    return EXIT_SUCCESS;
  }
  else
  {
    for ( ;ind < argc;ind++)
    {
 	  if (argv[argc - ind][ind] == '-')
	  {
   	    fprintf(stderr,"Error:\n\tThe last input must be a pattern to"
	 	   " search by,\n\tit may not start with a hyphen \"-\"."
	  	   "\n\taborting...\n");
   	    return FAIL;
	  }
      else if (1)
	  {
	    
  	  }
	  else
	  { 
        fprintf(stderr,"Error:\n\tOne or more of the input arguments"
		  "not valid arguments for grep-lite.\n\tRefer to \"--help\""
		  "for help fixing this problem."
	      "\n\taborting...");
        return FAIL;
	  }
    }
  }
  

  return EXIT_SUCCESS;
}

