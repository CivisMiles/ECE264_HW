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
	  printf("Usage: cat-lite [--help] [FILE]...\n"
	         "With no FILE, or when FILE is -, read standard input\n"
			 "\nExamples:\n"
			 "\tcat-lite README\tPrint the file README to standard output.\n"
			 "\tcat-lite f - g\tPrint f's contents,"
			 " then standard input,\n\t\t\tthen g's contents.\n"
			 "cat-lite\t\t COpy standard input to standard output.\n"
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

