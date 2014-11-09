#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "answer08.h"

void listprint(List *);
List * EditNode(List * node,const char *);

int main(int argc, char * * argv)
{
  //Initial Declarations
  List * list_1 = List_createNode("Hey");
  List * list_2 = List_createNode("there");
  List * list_3 = List_createNode("friend.");
  List * list_4 = List_createNode("HYD?");
  
  list_1->next = list_2;
  list_2->next = list_3;
  list_3->next = list_4;
  
  //Statements
  listprint(list_1);
  printf("The length of the linked list is %d\n",List_length(list_1));
   
  EditNode(list_1,"1");
  EditNode(list_2,"5");
  EditNode(list_3,"2");
  EditNode(list_4,"4");
  
  List_sort(list_1, strcmp);
  
  
  
  List_destroy(list_1);
  
  return EXIT_SUCCESS;
}

void listprint(List * list)
{
  while (list != NULL) {
    printf("\t%p ['%s' %p]\n",list,list->str,list->next);
    list = list->next; }
  return;
}

List * EditNode(List * node,const char * str)
{
  free(node->str);
  node->str = strdup(str);
  return node;
}
