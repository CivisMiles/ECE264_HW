#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "answer08.h"

void listprint(List *);

int main(int argc, char * * argv)
{
  //Initial Declarations
  //int lcv;
  //List * temp;

  //Statements
  List * head = List_createNode("Hey");
  List * list1 = List_createNode("there");
  List * list2 = List_createNode("friend.");
  head->next = list1;
  list1->next = list2;

  listprint(head);
  printf("The length of the linked list is %d\n",List_length(head));
  List_destroy(head);
  
  return EXIT_SUCCESS;
}

void listprint(List * list)
{
  while (list != NULL){
    printf("\t%p ['%s' %p]\n",list,list->str,list->next);
    list = list->next;}
  return;
}
