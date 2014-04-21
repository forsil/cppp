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
  if(text[1] == 0)
    {
      throw runtime_error("The second integer cannot be 0");

    }
  cout << text[0] / text[1] << endl;

  return 0;
}
