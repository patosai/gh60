UNITY=Unity/src
GH60=../
SRC=$(wildcard $(UNITY)/*.c) \
    $(wildcard *.test.c)
OUT=test.out

CXX=gcc
CXX_FLAGS=-Wall \
          -Werror \
          -pedantic \
          -o $(OUT)

all:
	CPATH=$(UNITY) $(CXX) $(CXX_FLAGS) $(SRC)

clean:
	rm $(OUT)

.PHONY: all clean
