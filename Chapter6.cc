#include <iostream>
#include "Chapter6.h"

using namespace std;

int fact(int n)
{
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return n * fact(n - 1);
        }
}

void  trans(int* p, int* q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}

void reset(int &i)
{
    i = 0;
}

void trans_f(int& p, int& q)
{
    int t = p;
    p = q;
    q = t;
}