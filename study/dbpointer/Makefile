CC	= gcc
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

dbpointer : dbpointer.cpp 
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean : 
	@rm -rf *.o dbpointer

