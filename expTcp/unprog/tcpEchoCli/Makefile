CC	= gcc
CFLAGS	= -W -Wall -O2
LDFLAGS	= -lm

tcpEchoCli : tcpEchoCli.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) -g

clean : 
	@rm -rf *.o tcpEchoCli 

