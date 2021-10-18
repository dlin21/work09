all: structy.o
	gcc -o structy structy.o
	
struct.o: structy.c
	gcc -c structy.c
	
run:
	./structy

clean:
	rm *.o
