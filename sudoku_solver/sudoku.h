#include <iostream>
#include <fstream>
#include <conio.h>
#include <list>

class Sudoku {
private:
    int sudoku[9][9];
    bool preliminary[9][9];
    std::fstream plik;

public:
    Sudoku();
    void print();
    void read();
    void save();
    void solve();
    bool is_conflict(int, int);
    bool is_correct();
};

