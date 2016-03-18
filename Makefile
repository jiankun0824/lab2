main:bmi.o main.o
	g++ -o main bmi.o main.o

bmi.o:bmi.cpp class.h
	g++ -c bmi.cpp

main.o:main.cpp class.h
	g++ -c main.cpp

clean:
	rm main*.o
