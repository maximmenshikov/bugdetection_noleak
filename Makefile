all: bugdetection_exec

bugdetection_exec: main.o
	g++ main.o -o bugdetection_exec

main.o:
	g++ -c main.cpp

clean:
	rm -rf bugdetection_exec *.o

