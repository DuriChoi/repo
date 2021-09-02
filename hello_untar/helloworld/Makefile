CC	= g++
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

hello : helloworld.c 
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean : 
	@rm -rf *.o hello 

