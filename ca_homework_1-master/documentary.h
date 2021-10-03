//
// Created by Tasbauova Dayana on 2.10.2021.
//

#ifndef __documentary__
#define __documentary__

#include <fstream>
#include <string>

// Структура Документального класса.
struct documentary {
    char *name;
    int year;
    int duration;
};

//------------------------------------------------------------------------------
// ввод док. фильма из потока ввода
void In(documentary &documentary, std::ifstream &stream);

//------------------------------------------------------------------------------
// вывод док. фильма из потока ввода
void InRandom(documentary &documentary);

//------------------------------------------------------------------------------
// вывод док. фильма из потока ввода
void Out(documentary &documentary, std::ofstream &stream);

//------------------------------------------------------------------------------
// вычисление year / name.len()
double Quotient(documentary &documentary);

#endif //__documentary__
