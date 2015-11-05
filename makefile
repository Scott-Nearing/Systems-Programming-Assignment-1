#sn379745
#Scott Nearing
.SUFFIXES: .c .o
CC = gcc
CFLAGS = -g
.o.c:
	$(CC) $(CFLAGS) -c $<
p1: main.o insert.o stats.o
	gcc main.o insert.o stats.o -o p1
main.o: constants.h struct_def.h globals.h prototypes.h
insert.o: constants.h struct_def.h externs.h prototypes.h
stats.o: constants.h struct_def.h externs.h prototypes.h
clean:
	rm -f *.o core