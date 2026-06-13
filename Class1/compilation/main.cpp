#include <iostream>

//This is a comment
int main()
{
    std::cout << "I love build systems.\n";
}


/* Compilation Process
 * 1. g++ -E main.cpp < main.i
 * 2. g++ -S main.i
 * 3. g++ -c main.s
 * 4. g++ main.o -o main
 * 5. ./main
 */
