GH60_PATH=..
MOCK_PATH=mock
UNITY_PATH=Unity/src
CPATH=$(UNITY_PATH),$(MOCK_PATH)/include

SRC=$(wildcard $(GH60_PATH)/src/*.c) \
		$(wildcard $(MOCK_PATH)/src/*.c) \
		$(wildcard $(UNITY_PATH)/*.c) \
    $(wildcard *.test.c)

OUT=test.out

CXX=gcc
CXX_FLAGS=-Wall \
          -Werror \
          -pedantic \
					-I$(GH60_PATH)/include \
          -o $(OUT)

all:
	CPATH=$(CPATH) $(CXX) $(CXX_FLAGS) $(SRC)

clean:
	rm $(OUT)

.PHONY: all clean
