CXX=g++

run: code-cracker.o
	$(CXX) code-cracker.cpp entropy.hpp -o code-cracker.o
	./code-cracker.o

entropy: entropy-test.o
	$(CXX) entropy-tester.cpp entropy.hpp -o entropy-test.o
	./entropy-test.o