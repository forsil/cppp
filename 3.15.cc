#include <iostream>
#include <vector>
using namespace std;

int main()
{
  string it;
  vector<string> text;
  cout << "Please input some integers:" << endl;
  while(cin >> it)
    {
      text.push_back(it);
    }
  auto i = text.end();
  --i;
  for(; i != text.begin(); --i)
    {
      cout << *i << endl;
    }
  cout << *i << endl;
  return 0;

}
