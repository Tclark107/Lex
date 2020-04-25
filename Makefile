#------------------------------------------------------------------------------
# Makefile for CSE 101 Programming Assignment 1
#
#       make                   makes Lex
#       make ListClient        makes ListClient
#		  make ListTest 	       makes ListTest
#------------------------------------------------------------------------------

Lex : Lex.o List.o
	gcc -o Lex Lex.o List.o

Lex.o : Lex.c List.h
	gcc -c -std=c99 -Wall Lex.c

ListClient: ListClient.o List.o
	gcc -o ListClient ListClient.o List.o

ListClient.o : ListClient.c List.h
	gcc -c -std=c99 -Wall ListClient.c

ListTest: ListTest.o List.o
	gcc -o ListTest ListTest.o List.o

ListTest.o : ListTest.c List.h
	gcc -c -std=c99 -Wall ListTest.c

List.o : List.c List.h
	gcc -c -std=c99 -Wall List.c

clean :
	rm -f Lex ListClient Lex.o ListClient.o List.o
 
