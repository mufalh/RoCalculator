all: Roman

Roman: cutcheck.o Tests.o cutgen.o
	gcc cutcheck.o Tests.o cutgen.o -o Roman

cutcheck.o: cutcheck.c
	gcc -c cutcheck.c

Tests.o: Tests.c
	gcc -c Tests.c

cutgen.o: cutgen.c
	gcc -c cutgen.c

clean:
	rm -rf *o Roman
