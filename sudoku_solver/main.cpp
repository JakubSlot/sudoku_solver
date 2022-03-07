#include <iostream>
#include "sudoku.h"
#define HEADER header();

void header(){
    system("CLS");
    std::cout << " S U D O K U   S O L V E R " << std::endl;
    std::cout << " ------------------------- " << std::endl;
}

int main()
{
    Sudoku sudoku;
    HEADER;
    std::cout << "  SUDOKU.txt file created," << std::endl;
    std::cout << " enter the values and save." << std::endl;
    std::cout << "Press any button when ready..." << std::endl;
    getchar();
repeat:
    HEADER;
    sudoku.read();
    sudoku.print();
    if(!sudoku.is_correct()){
        std::cout << std::endl << "There is an error in SUDOKU!!!" << std::endl;
        std::cout << "  Correct SUDOKU.txt file" << std::endl;
        std::cout << "Press any button when ready..." << std::endl;
        getchar();
        goto repeat;
    }
    std::cout << std::endl << std::endl << "  Is it ok? (Y/N)  ";
    char c;
    std::cin >> c;
    switch(c){
        case 'y':
        case 'Y':
            sudoku.solve();
        afterSolve:
            HEADER;
            std::cout << "  Here is the solution!!!";
            sudoku.print();
            std::cout << std::endl << std::endl << "Saved in the SOLVE.txt file." << std::endl;
            sudoku.save();
            std::cout << " Another SUDOKU? (Y/N) ";
            std::cin >> c;
            switch(c){
                case 'y':
                case 'Y':
                    main();
                    break;
                case 'n':
                case 'N':
                    break;
                default:
                    goto afterSolve;
                    break;
            }

            break;
        case 'n':
        case 'N':
            std::cout << "  Fix SUDOKU.txt file" << std::endl;
            std::cout << "Press any button when ready" << std::endl;
            getchar();
            goto repeat;
            break;
        default:
            goto repeat;
            break;
    }

	return 0;
}
