//Scott Nearing
//sn379745@albany.edu

//Description:
  //This c source file is part of a program that generates a BST from an input file
  //specified by the user via command line arguments and generates and output file
  //that contains various figures from the BST. This file contains a function that
  //inserts nodes into the BST

#include <stdio.h>
#include <stdlib.h>

#include "constants.h"
#include "struct_def.h"
#include "externs.h"
#include "prototypes.h"

//This function recives a pointer to a node pointer and a string
  //This function doesn't return
    //This function inserts nodes into the BST in sorted order 
void insert(nodePtr *ptr, char lword[16]){
  if( *ptr == NULL){ //if node is empty
    *ptr = malloc(sizeof(Node));

    //populate new node
    if(*ptr != NULL){
     strcpy((*ptr)-> word, lword);
      (*ptr)-> left = NULL;
      (*ptr)-> right = NULL;
    }  
    else{fprintf(stderr, "Error: couldn't allocate memory");}
  }

  else{ //node isn't empty
      if(strcmp(lword, (*ptr)->word) < 0){ //if word is less call insert on left
        insert( &( ( *ptr)->left), lword);}
      
      else if(strcmp(lword, (*ptr)->word) > 0) { //if word is greater call insert on right
        insert( &( ( *ptr)->right), lword);}
    }
}

