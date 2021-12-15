SRC=main.cpp
SRC+=base.cpp
SRC+=mp3.cpp
SRC+=cdisk.cpp

#CFLAGS+=-DCONSTRUCTOR

main : $(SRC)
	g++ $(CFLAGS) -o $@ $^

clean :
	rm -rf main *.o
