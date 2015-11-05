//Project 1

//Scott Nearing
//ID: sn379745

//Description:
//  This file is the contains the main function of a program that reads input
//  from a text file, generates a binary search tree, and writes stats about
//  the tree to an output file. The input and output files are specified by 
//  the user through command line arguments.


#include <stdio.h>
#include <stdlib.h>


//headers
#include "constants.h"
#include "struct_def.h"
#include "globals.h"
#include "prototypes.h"


//declaring main function that accepts command line arguments and returns an int
int main(int argc, const char * argv[]){

  /*
  replaced with globals of same name in header file
  //file pointers for input and outputfiles
  FILE * in;
  FILE * out;
  */

  int a; //local variable used while reading input file
  a = 1;  

  //Check if user input the wrong number of arguments
  if (argc != ARGS){
    //display error message if user didn't provide exactly 3 arguments
    fprintf(stderr, "Wrong number of arguments.\n");
      //close program
      return 1; 
                }


  //Open input file and assign file pointer
  in =  fopen(argv[1], "r");
    //check if input file opened correctly
    if (in == NULL){
      //display error message if file didn't open correctly
      fprintf(stderr,"input file didn't open correctly \n");
        //close program
	return 1;
                   }

  //Open output file and assign file pointer
  out = fopen(argv[2], "w");
    //check if output file opened correctly
    if (out == NULL){
      //display error message if file didn't open correctly
      fprintf(stderr, "output file didn't open correctly\n");
        //close program
        return 1;
                    }  
//By this point the program has confirmed the user input the correct
//number of arguments and that both the input and output files 
//opened correctly.
  //Now the program should start reading strings from the input file
  //and insert them into the BST
    //This will be done by a function in a seperate C file. 


  while(a == 1){//loop while a equals 0
    a = fscanf(in, "%s", gword); //a = number of strings read(should be 1 or EoF)
    insert(&gptr, gword);} //insert new string into node


//At this point the program has inserted all of the strings from the input file
//into the BST.
  //A function in a third file calculates the height of the tree, the number of
  //strings in the tree, and the number of leaves in the tree.
    //This function will be called 3 times. First for the entire tree, 2nd for
    //the left side, and finally for the right side.
      //The program will write the figures to the output file with every call.


leaf = 0; //must be set to 0 before this call to height()
strings = 0; //must be set to 0 before ever call to height()
fprintf(out, "%s %d", "(b) The tree has a height of" , height(gptr));
fprintf(out, "%s %d %s", "\n(a) The input file contains", strings, "strings");
fprintf(out, "%s %d %s", "\n(c) The tree contains", leaf, "leaves");


strings = 0;
fprintf(out,"%s %d","\nThe left subtree has a height of", height((gptr)->left) );
fprintf(out,"%s %d %s","\nThe left subtree contains", strings, "strings");


strings = 0;
fprintf(out,"%s %d","\nThe right subtree has a height of", height((gptr)->right) );
fprintf(out,"%s %d %s", "\nThe right subtree contains" , strings, "strings\n");

  
}
