all: cocalc

cocalc: statics main.o
	gcc main.o -o cocalc -L. -ldiv -ladd -lmul -ldif

statics: div.o  add.o dif.o add.o mul.o
	ar rc libdiv.a div.o
	ar rc libdif.a dif.o
	ar rc libadd.a add.o
	ar rc libmul.a mul.o

main.o: main.c
	gcc -c main.c

div.o: div.c
	gcc -c div.c

dif.o: dif.c
	gcc -c dif.c

add.o: add.c
	gcc -c add.c

mul.o: mul.c
	gcc -c mul.c

.PHONY: clean

clean: 
	rm -rf *.o *.a cocalc 
