CC=gcc
AR=ar
FLAGS = -Wall -g

all: mymathd mymaths mains maind

maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

mymathd:libmyMath.so
libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

mymaths: libmyMath.a
libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o

power.o: power.c myMath.h
	$(CC) -fPIC $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

main.o: main.c
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all mymathd mymaths

clean:
	-rm -f *.o *.a *.so mains maind
