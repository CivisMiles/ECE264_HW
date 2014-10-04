#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Declaration
void fileprint(FILE *);

int main(int argc, char * * argv)
{
  //Initial Declarations
  int ind;
  FILE * file;
    
  //Statements
  if (argc == 1)
  {
    file = stdin;
	fileprint(file);
  }
  else
  {
    for (ind = 1;ind < argc;ind++)
    {
      if (strcmp(argv[ind],"--help") == 0)
  	  {
	    printf("\nUsage: cat-lite [--help] [FILE]...\n"
	           "With no FILE, or when FILE is -, read standard input.\n"
			   "\nExamples:\n"
			   "   cat-lite README\tPrint the file README to standard output.\n"
			   "   cat-lite f - g\tPrint f's contents,"
			   " then standard input,\n\t\t\tthen g's contents.\n"
			   "   cat-lite\t\tCopy standard input to standard output.\n"
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
  }
  return EXIT_SUCCESS;
}

void fileprint(FILE * file)
{
  //Initial Declarations
  int c;

  //Statements
  if (file != NULL)
  {
    while ((c = getc(file)) != EOF)
	{
	  printf("%c",c);
	}

	printf("\n");

    fclose (file);
  }
  else
  {
    printf("Error in fopen: aborting...\n");
  }
  
  return;
}

