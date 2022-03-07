# sudoku-solver


Application creates a SUDOKU.txt file with an "empty" Sudoku.

    | 0 0 0 | 0 0 0 | 0 0 0 |
    | 0 0 0 | 0 0 0 | 0 0 0 |
    | 0 0 0 | 0 0 0 | 0 0 0 |
    
    | 0 0 0 | 0 0 0 | 0 0 0 |
    | 0 0 0 | 0 0 0 | 0 0 0 |
    | 0 0 0 | 0 0 0 | 0 0 0 |
    
    | 0 0 0 | 0 0 0 | 0 0 0 |
    | 0 0 0 | 0 0 0 | 0 0 0 |
    | 0 0 0 | 0 0 0 | 0 0 0 |

The Sudoku, what you want to solve, is stored in a SUDOKU.txt file, replacing the "0" with the appropriate digits.


    | 1 0 0 | 0 0 0 | 0 0 0 |
    | 0 2 0 | 0 0 0 | 0 0 0 |
    | 0 0 3 | 0 0 0 | 0 0 0 |
    
    | 0 0 0 | 4 0 0 | 0 0 0 |
    | 0 0 0 | 0 5 0 | 0 0 0 |
    | 0 0 0 | 0 0 6 | 0 0 0 |
    
    | 0 0 0 | 0 0 0 | 7 0 0 |
    | 0 0 0 | 0 0 0 | 0 8 0 |
    | 0 0 0 | 0 0 0 | 0 0 9 |


The application verifies the correctness of the sudoku and saves the solution in SOLVE.txt file.

    | 1 2 3 | 4 5 6 | 7 8 9 |
    | 4 5 6 | 7 8 9 | 1 2 3 |
    | 7 8 9 | 1 2 3 | 4 5 6 |
    
    | 2 1 4 | 3 6 5 | 8 9 7 |
    | 3 6 5 | 8 9 7 | 2 1 4 |
    | 8 9 7 | 2 1 4 | 3 6 5 |
    
    | 5 3 1 | 6 4 2 | 9 7 8 |
    | 6 4 2 | 9 7 8 | 5 3 1 |
    | 9 7 8 | 5 3 1 | 6 4 2 |
