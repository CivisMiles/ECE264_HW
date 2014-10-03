#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * * argv )
{
  //Initial Declarations
  int lcv;

  //Statements
  for (lcv = 1;lcv < argc;lcv++)
  {
    printf("%s ",argv[lcv]);
  }
  
  printf("\n");
  
  return EXIT_SUCCESS;
}

