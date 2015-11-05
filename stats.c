//Scott Nearing
//sn379745@albany.edu

//Description:
  //This c source file is part of a program that generates a BST from an input file
  //specified by the user via command line arguments and writes various facts and
  //figures about the BST to an output file specified by the user via command line
  //arguments. This c source file contains functions that compute the "facts and
  //figures" and write them to an output file.

#include <stdio.h>
#include <stdlib.h>


//headers
#include "constants.h"
#include "struct_def.h"
#include "externs.h"
#include "prototypes.h"



//This function returns the height of the tree specified by ptr
//It takes a pointer to a node as a parameter

int height(nodePtr ptr){
  int l = 0; //start left height at zero every call
  int r = 0; //start right height at zero every call

  // strings = strings + 1;
  
  if( ptr == NULL){//if passed pointer is null the height of the tree is 0
    return 0;}
  strings = strings + 1;//increment strings if tree isn't NULL

  if(ptr->left != NULL){ //left height=recursive call on left pointer
  l = height(ptr->left);}

  if(ptr->right != NULL){ //right height=recursive call on right pointer
  r = height(ptr->right);}

  if(ptr->left == NULL && ptr->right == NULL){ //height of leaf == 0
    leaf = leaf + 1; 
    return 0;}

  //returning height before moving up the tree
  //l if left side had larger height, r if right side had greater height
  //l if r == l because it needs one of them and they're equal
  if(l>r){return l+1;} 
  if(l<r){return r+1;}
  return l+1;
    
  
}

