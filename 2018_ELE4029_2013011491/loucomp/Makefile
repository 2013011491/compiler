#
# Makefile for TINY
# Gnu C Version
# K. Louden 2/3/98
#

CC = gcc

CFLAGS = 

OBJS = main.o util.o scan.o parse.o symtab.o analyze.o code.o cgen.o
OBJS_FLEX = main.o util.o lex.yy.o 
OBJS_YACC = main.o util.o symtab.o analyze.o code.o cgen.o lex.yy.o y.tab.o

tiny: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o tiny

main.o: main.c globals.h util.h scan.h parse.h analyze.h cgen.h
	$(CC) $(CFLAGS) -c main.c

util.o: util.c util.h globals.h
	$(CC) $(CFLAGS) -c util.c

scan.o: scan.c scan.h util.h globals.h
	$(CC) $(CFLAGS) -c scan.c

parse.o: parse.c parse.h scan.h globals.h util.h
	$(CC) $(CFLAGS) -c parse.c

symtab.o: symtab.c symtab.h
	$(CC) $(CFLAGS) -c symtab.c

analyze.o: analyze.c globals.h symtab.h analyze.h
	$(CC) $(CFLAGS) -c analyze.c

code.o: code.c code.h globals.h
	$(CC) $(CFLAGS) -c code.c

cgen.o: cgen.c globals.h symtab.h code.h cgen.h
	$(CC) $(CFLAGS) -c cgen.c

clean:
	-rm tiny
	-rm tm
	-rm $(OBJS_FLEX)
	-rm $(OBJS_YACC)
	-rm cminus_yacc
	-rm cminus_flex

tm: tm.c
	$(CC) $(CFLAGS) tm.c -o tm

all: cminus_yacc

#by flex

cminus_flex: $(OBJS_FLEX)
	$(CC) $(CFLAGS) main.o util.o lex.yy.o -o cminus_flex -lfl

lex.yy.o: cminus.l scan.h util.h globals.h
	flex cminus.l
	$(CC) $(CFLAGS) -c lex.yy.c -lfl

#by yacc

cminus_yacc: $(OBJS_YACC)
	$(CC) $(CFALGS) $(OBJS_YACC) -o cminus_yacc -lfl   

y.tab.o: cminus.y globals.h util.h scan.h
	bison -d cminus.y
	$(CC) $(CFLAGS) -c y.tab.c -lfl

