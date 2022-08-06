#include <iostream>
#include "func.h"

using namespace std;
#define hi pr()
constexpr auto MAX_MEM = 1000;

    int* ip;                  // ip - указатель на текущую инструкцию

    int main() {
    int mem[MAX_MEM];         // ОЗУ (0-999)
    int stack[100];           // стек
    int mon[30][30];          // видимая память
    int data[100];

    int a, b, c;              // регистры
    int sp, ds;               // sp - указатель на вершину стека 
                              // ds - указатель на данные
    bool zf, cf;              // zf - флаг нуля 
                              // cf - флаг переноса
                              // 
    // *******************************************************************

    hi;
    ip = mem;
    init_mem(7);
    ip = mem;
    dump();

   
    return 0;
    }