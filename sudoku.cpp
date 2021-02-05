#include "sudoku.h"
using namespace std;

Sudoku::Sudoku() 
{
for(int i=0;i<SudokuSize;i++) {
    map[i]=0;
}
//清空
}

Sudoku::Sudoku(const int ini_map[])
{
    for(int i=0;i < SudokuSize;i++) {
        map[i]=ini_map[i];
    }
}

void Sudoku::setMap(const int set_map[])
{
    for(int i=0;i < SudokuSize;i++) {
        map[i]=set_map[i];
    }
}
int Sudoku::getElement(int index)
{
    return map[index];
}

bool Sudoku::checkUnity(int arr[])
{
    int temp[9]={0};
    for(int i=0;i<9;i++) {
        ++temp[arr[i]-1];
    }
    for(int i=0;i<9;i++) {
        if (temp[i]!=1) {
            return false;
        }
    }
    return true;
}
bool Sudoku::isCorrect()
{
    //row
    int i,check_arr[9]={0};
    bool result;
    for(i=0;i<9;i+=9) {
        for(int j=0;j<9;j++) {
            check_arr[j]=map[i+j];
        }//for2
        result = checkUnity(check_arr);
        if(result == false) {
            return false;
        }
    }//for1
    //col
    for(i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            check_arr[j]=map[i+j*9];

        }//for2
        result=checkUnity(check_arr);
        if(result==false) {
            return false;
        }
    }//for1
    //cell
    for(i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            check_arr[j]=map[27*(i/3)+3*(i%3)+(j/3)*9+(j%3)];
        }
        result=checkUnity(check_arr);
        if(result==false) {
            return false;
        }
    }//for1
    return true;

}