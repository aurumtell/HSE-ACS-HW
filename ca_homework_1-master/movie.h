//
// Created by Tasbauova Dayana on 2.10.2021.
//

#ifndef __movie__
#define __movie__

#include "fiction.h"
#include "cartoon.h"
#include "documentary.h"

struct movie {
    enum type {
        FICTION, CARTOON, DOCUMENTARY
    };
    type type;
    union {
        fiction fic;
        cartoon car;
        documentary doc;
    };
};

//------------------------------------------------------------------------------
// ввод фильма из потока ввода
movie *In(std::ifstream &stream);

//------------------------------------------------------------------------------
// ввод фильма из потока ввода
movie *InRandom();

//------------------------------------------------------------------------------
// ввод фильма из потока ввода
void Out(movie &movie, std::ofstream &stream);

//------------------------------------------------------------------------------
// вычисление year / name.len()
double Quotient(movie &m);

#endif //__movie__
