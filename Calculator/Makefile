# Простой make-file без переменных, для релиза и дебага

.PHONY: all debug release clean

all: debug release

debug: Calculator-dbg

hello-dbg: Calculator.cpp
	g++ -g -O0 Calculator.cpp -o Calculator-dbg -Wall

release: Calculator

Calculator: Calculator.cpp
	g++ -O2 Calculator.cpp -o Calculator -DNDEBUG -Wall

clean:
	rm -rf Calculator-dbg Calculator
