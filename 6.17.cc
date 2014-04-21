#include <iostream>

using namespace std;

bool IsU(const string &s)
{
	for (auto i = s.begin(); i != s.end(); ++i)
    {
        if (isupper(i))
        {
            return true;
        }
    }
    return false;
}

void ChL(string &s)
{
	for (auto i = s.begin(); i != s.end(); ++i)
    {
        
    }
}
