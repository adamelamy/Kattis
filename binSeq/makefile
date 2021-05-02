CC := g++
FLAGS := -Wall -std=c++11 
SRC := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp,%.o,$(SRC))

main: $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm *.o
	rm main
