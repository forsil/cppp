#include "Chapter6.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "input integer:" << std::endl;
    int n;
    std::cin >> n;
    std::cout << fact(n) << std::endl;
    return 0;
}