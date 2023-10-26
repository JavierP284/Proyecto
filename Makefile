bin/ejecutable : src/Main.cpp include/*.hpp
	c++ src/Main.cpp -o bin/ejecutable -I include -l curses

run : bin/ejecutable
	./bin/ejecutable