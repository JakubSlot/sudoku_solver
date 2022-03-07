#include <iostream>
#include "sudoku.h"

Sudoku::Sudoku(){
    plik.open("SUDOKU.txt", std::ios::out);
    int *tab = &sudoku[0][0];
    plik << std::endl;
    for (size_t i = 0; i < 81; i++){
        *(tab+i) = 0;
        if(i != 0 && i%9 == 0)
            plik << std::endl;
        if(i != 0 && i%27 == 0)
            plik << std::endl;
        if(i%3 == 0)
            plik << "| " << *(tab+i) << " ";
        else
            plik << *(tab+i) << " ";
        if((i+1)%9 == 0)
            plik << "|";
    }
    bool *pre = &preliminary[0][0];
    for (int j = 0; j < 81; j++){
        *(pre+j) = 0;
    }
    plik << std::endl;
    plik.close();
}
void Sudoku::print() {
    int *tab = &sudoku[0][0];
    bool *pre = &preliminary[0][0];
    std::cout << std::endl;
    for (size_t i = 0; i < 81; i++){
        if(i != 0 && i%9 == 0)
            std::cout << std::endl;
        if(i != 0 && i%27 == 0)
            std::cout << std::endl;
        if(i%3 == 0)
            std::cout << "| " << *(tab+i) << " ";
        else
            std::cout << *(tab+i) << " ";
        if((i+1)%9 == 0)
            std::cout << "|";
    }
}
void Sudoku::read() {
    plik.open("SUDOKU.txt",std::ios::in);
    int *tab = &sudoku[0][0];
    bool *pre = &preliminary[0][0];
    std::string sequence;
    char znak;
    if(plik.is_open()){
        while(plik>>znak){
            if ( (znak >= '0') && (znak <= '9') )
                sequence.push_back(znak);
        }
    }
    else
        std::cout<<"Failed to open SUDOKU.txt file.";
    if(sequence.size() != 81){
        std::cout<<"The values in the table do not match"<<std::endl;
        plik.close();
        std::cout << "  Fix SUDOKU.txt file" << std::endl;
        std::cout << "Press any button when ready" << std::endl;
        getchar();
        read();
    }
    else{
        for(int i=0; i<81; i++){
            *(tab + i) =(int)sequence[i]-48;
            if(*(tab + i) != 0)
                *(pre+i) = 1;
        }
    }
    plik.close();
}
void Sudoku::save() {
    plik.open("SOLVE.txt",std::ios::out);
    int *tab = &sudoku[0][0];
    plik << std::endl;
    for (size_t i = 0; i < 81; i++){
        if(i != 0 && i%9 == 0)
            plik << std::endl;
        if(i != 0 && i%27 == 0)
            plik << std::endl;
        if(i%3 == 0)
            plik << "| " << *(tab+i) << " ";
        else
            plik << *(tab+i) << " ";
        if((i+1)%9 == 0)
            plik << "|";
    }
    plik << std::endl;
    plik.close();
}
void Sudoku::solve() {
    int *tab = &sudoku[0][0];
    bool *pre = &preliminary[0][0];
    for (size_t i = 0; i <81; i++){
        next:
        if(*(pre+i)==0){
            if(*(tab+i)==9){
                *(tab+i)=0;
                do
                    i--;
                while(*(pre+i)==1);
                goto next;
            }
            for(int j = (*(tab+i)+1); j <= 9; j++){
                if(!is_conflict(i,j)){
                    *(tab+i)=j;
                    i++;
                    if(i==81)
                        return;
                    goto next;
                }
            }
            *(tab+i)=0;
            do
                i--;
            while(*(pre+i)==1);
            goto next;
        }
    }
    return;
}
bool Sudoku::is_conflict(int position, int value){
    int *tab = &sudoku[0][0];
    for (size_t i = 0; i < 81; i++){
        if(*(tab+i)!=0 && (i%9 == position%9 || i/9 == position/9 || ((i/9)/3)*3 +(i%9)/3 == ((position/9)/3)*3 +(position%9)/3 )){
            if(value == *(tab+i))
                return 1;
        }
    }
    return 0;
}
bool Sudoku::is_correct() {
    int *tab = &sudoku[0][0];
    for (size_t j = 0; j < 81; j++){
        for (size_t i = 0; i < 81; i++){
            if((i%9 == j%9 || i/9 == j/9 || ((i/9)/3)*3 +(i%9)/3 == ((j/9)/3)*3 +(j%9)/3 )){
                if( i!=j && (*(tab+j) == *(tab+i)) && (*(tab+j) != 0)) {
                    return 0;
                }
            }
        }
    }
    return 1;
}


