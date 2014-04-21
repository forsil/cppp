#include <iostream>
#include <vector>
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
  cout << text[0] / text[1] << endl;

  return 0;
}
