//==============================================================================
// Lex.c
// Uses a doubly linked list ADT to sort an array lexicographically.
// Tristan Clark
//==============================================================================

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"List.h"

int main(int argc, char* argv[]) {

   // initialize Files and line number
   FILE* in;
   FILE* out;
   int lineCount = 0;
   
   // make sure correct input is given
   if(argc != 3) {
      printf("Usage: %s <input_file> <output_file>\n", argv[0]);
      exit(EXIT_FAILURE);  
   }
   
   // open files for read and write
   in = fopen(argv[1], "r");
   if(in == NULL) {
      printf("Unable to read from file %s\n", argv[1]);
      exit(EXIT_FAILURE);
   }
   out = fopen(argv[2], "w");
   if(out == NULL) {
      printf("Unable to write to file %s\n", argv[2]);
      exit(EXIT_FAILURE);
   }

   // get the line number
   char c;
   for(c = getc(in); c != EOF; c = getc(in)) {
      if(c == '\n') ++lineCount;
   }

   //char storage[lineCount][256];
   char line[lineCount][256];
   
   // store elements in an array 
   rewind(in);
   for (int i = 0; i < lineCount; ++i) {
      if(fgets(line[i], sizeof(line[i]), in) == NULL) {
         fprintf(stderr, "Read error on line %d\n",i);
         exit(1);
      }
   }

   // initialize new list and variables
   List L = newList();
   int x = 0;
   int insertFlag = 1;
   append(L, 0);

   // iterate through array and insert into linked list
   for(int i = 1; i < lineCount; ++i){
      insertFlag = 1;
      moveFront(L);
      while(index(L) >= 0){ 
         x = get(L);
         if(strcmp(line[i],line[x])<0) {
            insertBefore(L,i);
            insertFlag = 0;
            break;
         } 
         moveNext(L);
      }
      // if end of list without adding, append
      if(insertFlag) {
         append(L,i);
      }
   }
   
   // print values of array in order of list elements   
   moveFront(L);
   while(index(L) >= 0) {
      x = get(L);
      fprintf(out,"%s",line[x]);
      moveNext(L);
   }
   
   // close files and return success
   freeList(&L);
   fclose(in);
   fclose(out);
   return(EXIT_SUCCESS);
}
