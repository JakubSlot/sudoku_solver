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

    | 1 4 5 | 2 3 7 | 6 9 8 |
    | 6 2 7 | 1 8 9 | 3 4 5 |
    | 8 9 3 | 5 6 4 | 1 2 7 |
    
    | 2 1 6 | 4 7 8 | 9 5 3 |
    | 3 7 4 | 9 5 1 | 8 6 2 |
    | 5 8 9 | 3 2 6 | 4 7 1 |
    
    | 4 5 1 | 8 9 2 | 7 3 6 |
    | 9 6 2 | 7 1 3 | 5 8 4 |
    | 7 3 8 | 6 4 5 | 2 1 9 |
    
