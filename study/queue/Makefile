CC	= g++
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

main : main.cpp queue.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) -lpthread

clean : 
	@rm -rf *.o main 

