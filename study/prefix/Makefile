CC	= g++ 
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

prefix : prefix.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean : 
	@rm -rf *.o prefix 

