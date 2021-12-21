SRC=main.cpp
SRC+=common.cpp
SRC+=mp3p.cpp
SRC+=lpp.cpp
SRC+=cdp.cpp
#CFLAGS+=-DCONSTRUCTOR

main : $(SRC)
	g++ $(CFLAGS) -o $@ $^

clean :
	rm -rf main *.o
