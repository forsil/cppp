#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> text(10);
  for (int i = 0; i != 10; ++i)
    {
      cin >> text[i];
    }
  for (auto i = text.begin(); i != text.end(); ++i)
    {
      *i += *i;
    }
  for (auto i = text.begin(); i != text.end(); ++i)
    {
      cout << *i << endl;
    }
  return 0;
}
