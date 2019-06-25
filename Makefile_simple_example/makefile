main:main.o my1.o my2.o
	g++ -o main main.o my1.o my2.o
main.o:main.cpp my1.h my2.h
	g++ -c main.cpp
my1.o:my1.cpp my1.h
	g++ -c my1.cpp
my2.o:my2.cpp my2.h
	g++ -c my2.cpp
clean:
	rm -f *.o main
