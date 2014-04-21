#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  int u;
  vector<int> text;
  while(cin >> u)
    {
      text.push_back(u);
    }
  for(auto i = text.begin(); i != text.end() - 1; ++i)
    {
      cout << *i + *(i+1) << " ";
    }
  cout << endl;
  for (auto i = text.begin(), j = text.end() - 1; i != text.end(); ++i, --j)
    {
      cout << *i + *j << " ";
    }
  cout << endl;
  return 0;
}
