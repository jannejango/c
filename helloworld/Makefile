helloworld: helloworld.o
	gcc -o helloworld helloworld.o

helloworld.o: helloworld.s
	gcc -c helloworld.s

helloworld.s: helloworld.i
	gcc -S helloworld.i

helloworld.i: helloworld.c
	gcc -E helloworld.c > helloworld.i
