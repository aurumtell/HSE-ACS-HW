//
// Created by Tasbauova Dayana on 2.10.2021.
//

#ifndef __cartoon__
#define __cartoon__

#include <fstream>
#include <string>

struct cartoon {
    char *name;
    int year;
    enum type {
        DRAW, PUPPET, PLASTICINE
    };
    type t;
};

//------------------------------------------------------------------------------
// ввод детского фильма из потока ввода
void In(cartoon &cartoon, std::ifstream &stream);

//------------------------------------------------------------------------------
// ввод детского фильма из потока ввода
void InRandom(cartoon &cartoon);

//------------------------------------------------------------------------------
// ввод детского фильма из потока ввода
void Out(cartoon &cartoon, std::ofstream &stream);

//------------------------------------------------------------------------------
// вычисление year / name.len()
double Quotient(cartoon &c);

#endif //__cartoon__
