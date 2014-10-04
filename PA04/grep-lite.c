#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * * argv)
{
  //Initial Declarations
  

  //Statements
  for (ind = 1;ind < argc;ind++)
  {
    if (strcmp(argv[ind],"--help") == 0)
  	{
	  printf("\nUsage: grep-lite [OPTION]... PATTERN\n"
	         "Search for PATTERN in standard input. PATTERN is a\n"
			 "string. grep-lite will search standard input line by\n"
			 "line, and (by default) print out those lines which\n"
			 "contain PATTERN as a substring.\n"
		 	 "\n\t-v, --invert-match\tprint non-matching lines\n"
		 	 "\t-n, --line-number\tprint line numbers with output\n"
		 	 "\t-q, --quiet\t\tsuppress all output"
		 	 "Exit status is 0 if any line is selected, 1 otherwise;\n"
			 "if any error occurs, then the exit status is 2.\n"
		 	 "\n");

        return EXIT_SUCCESS;
	  }
      else if (strcmp(argv[ind],"-") == 0)
	  {
        file = stdin;
		fileprint(file);
	  }
	  else
	  { 
        file = fopen(argv[ind],"r");
	    	    fileprint(file);
	  }
  }
  

  return EXIT_SUCCESS;
}

