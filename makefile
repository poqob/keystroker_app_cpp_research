all: compile run
	


compile:
	
	g++ -I ./include/ -o ./lib/Timer.o -c ./src/Timer.cpp
	g++ -I ./include/ -o ./lib/Interval.o -c ./src/Interval.cpp
	g++ -I ./include/ -o ./lib/Log.o -c ./src/Log.cpp
	g++ -I ./include/ -o ./lib/Logger.o -c ./src/Logger.cpp
	g++ -I ./include/ -o ./lib/app.o -c ./src/app.cpp

	g++ -c ./src/main.cpp -o ./lib/main.o 

	g++  ./lib/Timer.o ./lib/Interval.o ./lib/Log.o ./lib/Logger.o ./lib/app.o ./lib/main.o -o ./bin/program

run:
	./bin/program