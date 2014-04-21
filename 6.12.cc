#include "Chapter6.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "input p, q: " << std::endl;
    int p, q;
    cin >> p >> q;
    trans_f(p,q);
    cout << p << " " << q << endl;
    return 0;
}