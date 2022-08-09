CC	= g++
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

main : main.o permutation.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
permutation.o : permutation.cpp
	$(CC) $(CFLAGS) -c -o $@ $^ $(LDFLAGS)
main.o : main.cpp
	$(CC) $(CFLAGS) -c -o $@ $^ $(LDFLAGS)
clean : 
	@rm -rf *.o main
	@rm -rf *.o permutation 

