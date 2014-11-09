#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "answer08.h"

//List * Merge(List *, List *, List *, int (*compar)(const char *, const char *));

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
  List * list;
  
  //Statements
  if (compar(lhs->str,rhs->str) > 0)
  {
    list = rhs;
  	list->next = List_merge(lhs, rhs->next, compar);
  }
  else
  {
    list = lhs;
    list->next = List_merge(lhs->next, rhs, compar);
  }
  return (list);
}

List * List_sort(List * list, int (*compar)(const char *, const char *))
{
  if (list == NULL)
  {
    return (NULL);
  }
  
  //Initial Declarations
  List * list1 = list;
  List * list2;
  int len = List_length(list);
  int lcv;

  //Statements
  //base case
  if (len < 2)
  {
    return (list);
  }
  
  //Recursive
  for (lcv = 0;lcv <= len/2;lcv++)
  {
	list = list->next;
  }
  list2 = list->next;
  list->next = NULL;
  List_sort(list1, compar);
  List_sort(list2, compar);
  List_merge(list1, list2, compar);
  
  return (list);
}

