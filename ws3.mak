ws3 : Rabbit.o ws3.o ReadUtils.o
	g++ -g Rabbit.o ws3.o ReadUtils.o -o ws3

ws3.o : ws3.cpp Rabbit.h ReadUtils.h
	g++ -g -c ws3.cpp -o ws3.o

Rabbit.o : Rabbit.cpp Rabbit.h ReadUtils.h
	g++ -g -c Rabbit.cpp -o Rabbit.o

ReadUtils.o : ReadUtils.cpp ReadUtils.h
	g++ -g -c ReadUtils.cpp -o ReadUtils.o


