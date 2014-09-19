#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <answer03.h>


void main()
{
  
  //testing strcat_ex
  printf("\n\nTesting strcat_ex\n");
  strcat_ex();
  strcat_ex();
  strcat_ex();
  strcat_ex();
  
  //testing explode
  printf("\nTesting \n");
  explode();
  explode();
  explode();
  explode();
  
  //testing implode
  printf("\nTesting implode\n");
  implode();
  implode();
  implode();
  implode();
  
  //testing sortStringArray
  printf("\nTesting sortStringArray\n");
  sortStringArray();
  sortStringArray();
  sortStringArray();
  sortStringArray();
  
  //testing sortStringCharacters
  printf("\nTesting sortStringCharacters\n");
  sortStringCharacters();
  sortStringCharacters();
  sortStringCharacters();
  sortStringCharacters();
  
  //testing destroyStringArray
  printf("\nTesting destroyStringArray\n\n");
  destroyStringArray();
  destroyStringArray();
  destroyStringArray();
  destroyStringArray();
  
  return EXIT_SUCCESS;
}

