#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    stringstream filename{"00205.txt"};

    int val = 0;
    string back;

    filename >> val >> back;

    cout << val << endl;
    cout << back << endl;
    return 0;

}