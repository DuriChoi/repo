CC	= g++
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

newstruct : newstruct.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean : 
	@rm -rf *.o newstruct 
