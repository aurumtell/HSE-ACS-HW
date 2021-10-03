#ifndef __fiction__
#define __fiction__

#include <fstream>
#include <string>

// Структура научного фильма.
struct fiction {
    char *name;
    int year;

    char *director;
};

//------------------------------------------------------------------------------
// ввод научного фильма из потока ввода
void In(fiction &fiction, std::ifstream &stream);

//------------------------------------------------------------------------------
// ввод научного фильма из потока ввода
void InRandom(fiction &fiction);

//------------------------------------------------------------------------------
// ввод научного фильма из потока ввода
void Out(fiction &fiction, std::ofstream &stream);

//------------------------------------------------------------------------------
// вывод year / name.len()
double Quotient(fiction &f);

#endif //__fiction__
