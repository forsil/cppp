#include "Chapter6.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "input integer: " << std::endl;
    int p, q;
    cin >> p >> q;
    trans(&p, &q);
    std::cout << "p=: " << p << ", q=: " << q << std::endl;
    return 0;
}