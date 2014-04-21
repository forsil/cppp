#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int u;
  vector<int> text;

  while(cin >> u)
    {
      text.push_back(u);
    }
  auto i= text.size();
  for(int x = 0; x != i - 1; ++x)
    {
      cout << text[x] + text[x+1] << " ";
    }
  cout << endl;
  for(int x = 0; x != i; ++x)
    {
      cout << text[x] + text[i-1-x] << " ";
    }
  cout << endl;
  return 0;
}
