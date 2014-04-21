#include "Chapter6.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "input i: " << std::endl;
    int i;
    cin >> i;
    reset(i);
    std::cout << i << std::endl;
    return 0;
}