#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <>
#include "answer08.h"

void listprint(List *);

void listprint(List * list)
{
  while (list != NULL){
    printf("\t%p ['%s' %p]\n",list,list->str,list->next);
    list = list->next;}
  return;
}

List * List_createNode(const char * str)
{
  //Initial Declarations
  
  //Statements
  List * list = malloc(sizeof(List));
  list->str = s;
  list->next = NULL;

  return list;
}

void List_destroy(List * list)
{
  //Initial Declarations
  
  //Statements

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
