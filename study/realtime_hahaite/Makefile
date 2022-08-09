CC	= g++
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

rt : rt.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) -lpthread

clean : 
	@rm -rf *.o rt 

