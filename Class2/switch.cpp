#include <iostream>

int main()
{
    int a = 10;

    switch (a)
    {
    case 5:
        std::cout << "You selected 5" << std::endl;
        break;
    case 10:
        std::cout << "You selected 10" << std::endl;
        break;
    default:
        std::cout << "You selected nothing" << std::endl;
    }
}