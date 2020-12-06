myBank.o: myBank.c
	gcc -Wall -g -c myBank.c -o myBank.o

libmyBank.a: myBank.o
	ar -rcs libmyBank.a myBank.o

libmyBank.so: myBank.o
	 gcc -Wall -shared -o libmyBank.so myBank.o

mains: main.o libmyBank.a
	gcc -Wall -g -o mains main.o libmyBank.a

maind: main.o libmyBank.so
	gcc -Wall -g -o maind main.o ./libmyBank.so

main.o: main.c myBank.h
	gcc -Wall -g -c main.c

.PHONY: clean all

all: libmyBank.so libmyBank.a mains maind myBank.o main.o

clean:
	rm -f *.o *.a *.so mains maind
