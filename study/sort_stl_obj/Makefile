main : sort.o main.o
	gcc -o main sort.o main.o -lstdc++ 

sort.o : sort.cpp
	g++ -c -o sort.o sort.cpp

main.o : sort.h main.c 
	gcc -c -o main.o main.c -lstdc++ 

clean :
	rm -rf *.o
	rm -rf main
