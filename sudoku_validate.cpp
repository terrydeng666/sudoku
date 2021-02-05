#include <cstdlib>
#include <iostream>
#include <fstream>
#include "sudoku.h"
#define MAX_CASE 100
using namespace std;

int main()
{
int sudoku_in[Sudoku::SudokuSize]={0};
Sudoku su[MAX_CASE];
ifstream in("su_infile",ios::in);
int num_case;
in >> num_case;
for(int i=0;i<num_case;i++) {
    for(int j=0;j<Sudoku::SudokuSize;j++) {
        in >> sudoku_in[j];
    }
    su[i].setMap(sudoku_in);

}//數獨個數

//印出來
for(int i=0;i<num_case;i++) {
    for(int j=0;j<Sudoku::SudokuSize;j++) {
        cout << su[i].getElement(j) << " ";
        if(j%9==8) {
            cout << endl;
        }
    }//for2
    if(su[i].isCorrect()) {
        cout << "CORRECT\n";
    }
    else {
        cout << "INCORRECT\n";
    }
}//for1

return 0;
}