#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "answer08.h"

List * Merge(List *, List *, int (*compar)(const char *, const char *));

List * List_createNode(const char * str)
{
  //Initial Declarations

  //Statements
  List * list = malloc(sizeof(List));
  list->str = strdup(str);
  list->next = NULL;
  return list;
}

void List_destroy(List * list)
{
  //Initial Declarations

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
  if (lhs == NULL && rhs != NULL)
  {
    return (rhs);
  }
  else if (rhs == NULL && lhs != NULL)
  {
    return (lhs);
  }
  else if (lhs == NULL && rhs == NULL)
  {
    return (NULL);
  }
   
  //Initial Declarations

  //Statements
  if (compar(lhs->str,rhs->str) > 0)
  {
    Merge(rhs, lhs, compar);
    return (rhs);
  }
  else
  {
    Merge(lhs, rhs, compar);
    return (lhs);
  }
}

void Merge(List * lhs, List * rhs, int (*compar)(const char *, const char *))
{
  if (lhs == NULL && rhs != NULL)
  {
    return (rhs);
  }
  else if (rhs == NULL && lhs != NULL)
  {
    return (lhs);
  }

  //Initial Declarations
  List * new = lhs->next;
  
  //Statements
  if (compar(new->str,rhs->str) > 0)
    lhs->next = rhs;
    Merge(rhs, new, compar);
    return;
  }
  else
  {
    Merge(new, rhs, compar);
    return;
  }
}

List * List_sort(List * list, int (*compar)(const char *, const char *))
{
  //Initial Declarations
  
  //Statements
  
  
  return (list);
}

