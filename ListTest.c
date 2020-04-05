/****************************************************************************************
*  ListTest.c
*  My test for List ADT
*****************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"List.h"

int main(int argc, char* argv[]){

   // init a List
   /*List A = newList();
   List B = newList();

   // prepend to the list
   prepend(A, 3);
   //printList(stdout,A);
   prepend(A,9);
   //printList(stdout,A);
   prepend(A,321);
   prepend(A,2);
   prepend(A,9);
   printList(stdout,A);

   // test the cursor
   //printf("%d\n",get(A)); // prints error ae
   moveNext(A);
   //printf("%d\n",get(A)); // if previously undefined moveNext() should do nothing
   moveFront(A);
   printf("%d\n",get(A)); // at 0 as expected
   moveNext(A);
   moveNext(A);
   moveNext(A);
   printf("%d\n",get(A)); // at 3 as expected
   movePrev(A);
   movePrev(A);
   printf("%d\n",get(A)); // at 1 as expected
   moveBack(A);
   printf("%d\n",get(A)); // at 4 as expected
   printf("%d\n",index(A)); // 4 ae
   moveFront(A);
   movePrev(A);
   //printf("%d\n",get(A)); // at -1 as expected
   moveBack(A);
   moveNext(A);
   //printf("%d\n",get(A)); // at -1 as expected 
   //prepend(A,10);
   printf("%d\n",length(A)); // at 6 as expected

   // test equals 
   //prepend(B,3);
   printf("%s\n", equals(A,B)?"true":"false");
   
   printf("\n");
   printList(stdout,B);
   printList(stdout,A);
   
   // test append
   append(B, 7);
   printList(stdout,B);
   append(B,3);
   printList(stdout,B);
   append(B,2);
   append(B,1);
   printList(stdout,B);
   append(A,6);
   printList(stdout,A);
   */

   // test insertBefore
   /*List C = newList();
   append(C,14);
   printList(stdout,C);
   moveFront(C);
   insertBefore(C,4);
   printList(stdout,C);
   append(C,17);
   append(C,32);
   append(C,67);
   moveBack(C);
   printList(stdout,C); 
   printf("%d\n",index(C));
   insertBefore(C,25);
   printf("%d\n",index(C));
   printList(stdout,C);
   */

   // test insertAfter
   /*List D = newList();
   append(D,14);
   printList(stdout,D);
   /*moveFront(D);
   insertAfter(D,4);
   printList(stdout,D);
   append(D,17);
   append(D,32);
   append(D,67);
   moveBack(D);
   printList(stdout,D); 
   //printf("%d\n",index(C));
   insertAfter(D,25);
   //printf("%d\n",index(C));
   printList(stdout,D);
   moveFront(D);
   insertAfter(D,15);
   printList(stdout,D);
   insertAfter(D,12);
   printList(stdout,D);
   moveNext(D);
   moveNext(D);
   insertAfter(D,37);
   printList(stdout,D);
   insertAfter(D,312);
   printList(stdout,D);
   insertBefore(D,90);
   printList(stdout,D);
   insertBefore(D,100);
   printList(stdout,D);

   // test deleteFront
   deleteFront(D);
   printList(stdout,D);
   printf("after dF()\n");
   deleteBack(D);
   printList(stdout,D);
   printf("after dB()\n");
   deleteBack(D);*/

   // testing delete
   List E = newList();
   append(E,10);
   //delete(E);
   printList(stdout,E);
   //printf("after d()\n");
   append(E,20);
   printList(stdout,E);
   //delete(E);
   printList(stdout,E);
   append(E,30);
   //moveBack(E);
   //movePrev(E);
   printList(stdout,E);
   //delete(E);
   //printList(stdout,E);
   append(E,40);
   moveBack(E);
   movePrev(E);
   movePrev(E);
   printList(stdout,E);
   delete(E);
   printList(stdout,E);

   List F = copyList(E);
   printList(stdout,F);

   List G = concatList(E,F);
   printList(stdout,G);

   clear(G);
   printList(stdout,G);
   printf("cleared\n");

   freeList(F);
   printList(stdout,F);
   printf("freed\n");

}
