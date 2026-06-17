#include "tools.hpp"

int main()
{
    MakeItSunny();
    MakeItRain();
}

/* Compilation Process
 * g++ -std=c++20 -c tools.cpp -o tools.o
 * nm -gC tools.o                                 #To see what inside the tools.o
 * ar rcs libtools.a tools.o
 * c++ -std=c++20 main.cpp -L. -ltools -o main
 * ./main
 */