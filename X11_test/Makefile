LIB = /usr/local/lib/libSDL2.so
LIB_DIR = /usr/local/lib

all: tst.o
		c++ tst.o $(LIB) -I /usr/local/include
tst.o : tst.cpp
	c++ -c tst.cpp -o tst.o
