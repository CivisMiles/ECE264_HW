#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "answer09.h"

void arryreset(char *, int);

BusinessNode * create_node(char * stars, char * name, char * address)
{
  //Local Declarations
  BusinessNode * node = malloc(sizeof(BusinessNode)); 

  //Statements
  node->stars = strdup(stars);
  node->name = strdup(name);
  node->address = strdup(address);
  node->left = NULL;
  node->right = NULL;
  return (node);
}

BusinessNode * tree_insert(BusinessNode * node, BusinessNode * root)
{
  if (node == NULL)
  {
    printf("\nError: node given is null\n");
    return (root);
  }
  //Local Declarations 
  int dir = strcmp(root->stars,node->stars);
  BusinessNode * root1 = root;
  
  //Statements
  if (dir > 0)
  {
    if (root->right != NULL)
	{
	  root = tree_insert(node, root->right);
	}
	else
	{
      root->right = node;
	}
  }
  else if (dir < 0)
  {
    if (root->left != NULL)
	{ 
	  root = tree_insert(node, root->left);
	}
	else
	{
      root->left = node;
	}
  }
  else if (dir == 0)
  {
    dir = strcmp(root->name,node->name);
    if (dir > 0)
    {
      if (root->right != NULL)
	  {
	    root = tree_insert(node, root->right);
	  }
	  else
	  {
        root->right = node;
	  }
    }
    else if (dir < 0)
    {
      if (root->left != NULL)
	  { 
	    root = tree_insert(node, root->left);
	  }
	  else
	  {
        root->left = node;
	  }
    }
	else if (dir == 0)
	{
      dir = strcmp(root->address,node->address);
      if (dir > 0)
      {
        if (root->right != NULL)
	    {
	      root = tree_insert(node, root->right);
	    }
	    else
	    {
          root->right = node;
	    }
      }
      else if (dir < 0)
      {
        if (root->left != NULL)
	    { 
	      root = tree_insert(node, root->left);
	    }
	    else
	    {
          root->left = node;
	    }
      }
      else if (dir == 0)
	  {   
	    printf("Error: the current line is duplicated");
		return (root);
	  }
	}
  }
  if (root1 != root)
  {
    printf("\nError: 'tree_insert' returned flase value of root\n");
    return (root);
  }  
  return (root);
}

BusinessNode * load_tree_from_file(char * filename)
{
  int lcv = 0;
  BusinessNode * root = NULL;
  if (filename == NULL)
  {
    return (root);
  }
  //Local Declarations
  FILE * input = fopen(filename, "r");
  while (input == NULL && lcv < 4)
  {
    fclose(input);
    input = fopen(filename, "r");
    lcv++;
  }
  if (input == NULL)
  {
    return(root);
  }
  int first = 0;
  size_t stlen;
  size_t nalen;
  size_t adlen;
  ssize_t starlen;
  ssize_t namelen;
  ssize_t addlen = 0;
  char star[5];
  char name[75];
  char address[200];
  char ** arr[3];
  BusinessNode * root1;
  
  //Statements
  while (addlen != -1)
  {
    stlen = 5;
	nalen = 75;
	adlen = 200;
	starlen = getdelim(arr[0], &stlen, '\t', input);
	namelen = getdelim(arr[1], &nalen, '\t', input);
	addlen = getdelim(arr[2], &adlen, '\n', input);
	/*starlen = getdelim(star, &stlen, '\t', input);
	namelen = getdelim(name, &nalen, '\t', input);
	addlen = getdelim(address, &adlen, '\n', input);*/
	if (first == 0)
    {
	  root = create_node(*arr[0], *arr[1], *arr[2]);
	  //root = create_node(star, name, address);
	  first++;
    }
    else
    {
      BusinessNode * node = create_node(*arr[0], *arr[1], *arr[2]); 
      root1 = tree_insert(node, root);
	  if (root1 != root)
	  {
        printf("Error:'tree_insert' returned false value of root");
		return (NULL);
	  }
    }
	arryreset(star, starlen);
	arryreset(name, namelen);
	arryreset(address, addlen);
  }
  return (root);
}

BusinessNode * tree_search_name(char * name, BusinessNode * root)
{
  if (root != NULL)
  {
    //Local Declarations 
    int greater = strcmp(name, root->name);
    
    //Statements
    if (greater > 0)
    {
      root = tree_search_name(name, root->left);
    }
    else if (greater < 0)
    {
      root = tree_search_name(name, root->right);
    }
  }
  return (root);
}

void printnode(BusinessNode * node)
{
  //Local Declarations
  
  //Statements
  if (node != NULL)
  {
    printf("%s\n"
	  "============\n"
	  "Stars:\n\t%s\n"
	  "Address:\n\t%s\n",node->name,node->stars,node->address);
  }
  else
  {
    printf("\nThe node is empty (NULL)\n");
  }
  return;
}

void print_tree(BusinessNode * tree)
{
  //Local Declarations 

  //Statements
  if (tree != NULL)
  {
    printnode(tree);
	printf("Printing Right\n");
    print_tree(tree->right);
	printf("Printing Left\n");
    print_tree(tree->left);
  }
  return;
}

void destroy_tree(BusinessNode * root)
{
  //Local Declarations
  
  //Statements
  if (root != NULL)
  {
    free(root->address);
    free(root->stars);
	free(root->name);
    destroy_tree(root->left);
    destroy_tree(root->right);
	free(root);
  }
  return;
}

void arryreset(char * array, int len)
{
  //Initial Declarations
  int lcv;
  
  //Statements
  for (lcv = 0;lcv < len;lcv++)
  {
    array[lcv] = 0;
  }
  return;
}

