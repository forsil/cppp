#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<unsigned> scores(11,0);
  unsigned u;
  auto i = scores.begin();
  while(cin >> u)
    {
      ++*(i + u / 10);
    }
  for(; i != scores.end(); ++i)
    {
      cout << *i << " ";
    }
  cout << endl;
  return 0;
}
