sudoku: sudoku.o sudoku_validate.o
	g++ -o sudoku sudoku.o sudoku_validate.o

sudoku.o:sudoku.cpp sudoku.h
	g++ -c sudoku.cpp

sudoku_validate.o: sudoku_validate.cpp sudoku.h
	g++ -c sudoku_validate.cpp

clean:
	rm sudoku *.o 