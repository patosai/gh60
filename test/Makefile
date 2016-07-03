GH60_PATH=..
MOCK_PATH=mock
UNITY_PATH=Unity/src

SRC=main.c \
		$(wildcard $(GH60_PATH)/src/*.c) \
		$(wildcard $(MOCK_PATH)/src/**/*.c) \
		$(wildcard $(UNITY_PATH)/*.c) \
    $(wildcard *.test.c)

OUT=test.out

CXX=gcc
CXX_FLAGS=-Wall \
          -pedantic \
					-I$(GH60_PATH)/include \
					-I$(MOCK_PATH)/include \
					-I$(UNITY_PATH) \
          -o $(OUT)

all:
	$(CXX) $(CXX_FLAGS) $(SRC)

clean:
	rm $(OUT)

.PHONY: all clean
