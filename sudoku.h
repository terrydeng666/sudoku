#include <iostream>

class Sudoku {
    public:
    Sudoku();
    Sudoku(const int ini_map[]);
    void setMap(const int set_map[]);
    int getElement(int index);
    bool isCorrect();
    static const int SudokuSize = 81;

    private:
    bool checkUnity(int arr[]);
    int map[SudokuSize];
};