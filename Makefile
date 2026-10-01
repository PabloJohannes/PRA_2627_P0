all: main

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	g++ -c RoboticArm.cpp

main.o: main.cpp RoboticArm.h
	g++ -c main.cpp

main: main.o RoboticArm.o
	g++ -o main main.o RoboticArm.o

clean:
	rm -f *.o main

test: all
	./main
