all: test

test: main.o Node.o Node.h LinkedList.o LinkedList.h
	g++ main.o Node.o LinkedList.o -o nodeTest

main.o: main.cpp 
	g++ -c main.cpp

Node.o: Node.cpp Node.h
	g++ Node.h -c Node.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ LinkedList.h -c LinkedList.cpp

run: all
	./nodeTest

clean: all
	rm nodeTest
	rm Node.o
	rm main.o
	rm LinkedList.o

