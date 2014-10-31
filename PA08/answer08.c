#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "answer08.h"

List * List_createNode(const char * str)
{
  //Initial Declarations
  //printf("List_createNode\n");
  //Statements
  List * list = malloc(sizeof(List));
  list->str = strdup(str);
  list->next = NULL;

  return list;
}

void List_destroy(List * list)
{
  //Initial Declarations
  //printf("List_destroy\n");
  //Statements
  if (list != NULL)
  {
    List_destroy(list->next);
    free(list->str);
    free(list);
  }
  
  return;
}

int List_length(List * list)
{
  //Initial Declarations
  int len = 0;
  //printf("List_length\n");
  //Statements
  while (list != NULL)
  {
    list = list->next;
    len++;
  }

  return (len);
}

List * List_merge(List * lhs, List * rhs, int (*compar)(const char *, const char *))
{
  //Initial Declarations
  
  //Statements
  
  
  return (lhs);
}

List * List_sort(List * list, int (*compar)(const char *, const char *))
{
  //Initial Declarations
  
  //Statements
  
  
  return (list);
}

