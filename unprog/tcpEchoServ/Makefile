CC	= gcc
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

tcpEchoServ : tcpEchoServ.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean : 
	@rm -rf *.o tcpEchoServ 
