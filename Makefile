#------------------------------------------------------------------------------
# Makefile for CSE 101 Programming Assignment 1
#
#       make                   makes Lex
#       make ListClient        makes ListClient
#------------------------------------------------------------------------------

ListTest: ListTest.o List.o
	gcc -o ListTest ListTest.o List.o

ListClient.o : ListTest.c List.h
	gcc -c -std=c99 -Wall ListTest.c

List.o : List.c List.h
	gcc -c -std=c99 -Wall List.c

clean :
	rm -f Lex ListClient Lex.o ListClient.o List.o
 
