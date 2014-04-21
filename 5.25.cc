#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> text;
  cout << "2 integers:" << endl;

  for (auto i = 0; i != 2; ++i)
    {
      int u;
      cin >> u;
      text.push_back(u);
    }
  try
    {
      if(text[1] == 0)
        {
          throw runtime_error("The second integer must not be 0\n");
        }
      cout << text[0] / text[1] << endl;
    } catch (runtime_error err)
    {
      cout << err.what() << "Try again? y or n:" << endl;
      char c;
      cin >> c;
      if (!cin ||c == 'n')
        {
          return 0;
        }
    }

  return 0;
}
