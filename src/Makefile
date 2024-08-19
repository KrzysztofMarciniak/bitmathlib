CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = bitmathlib
OBJS = bitmathlib.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

bitmathlib.o: bitmathlib.cpp header.h
	$(CXX) $(CXXFLAGS) -c bitmathlib.cpp

main.o: main.cpp header.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(TARGET) $(OBJS)
