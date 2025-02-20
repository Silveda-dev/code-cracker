CXX=g++

entropy: entropy-test.o
	$(CXX) entropy-tester.cpp entropy.hpp -o entropy-test.o
	./entropy-test.o