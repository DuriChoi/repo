CFLAGS = -W -Wall
LDFLAGS = -lpthread

main : main.cpp myTest.cpp
	g++ $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean :
	rm -rf main *.o

