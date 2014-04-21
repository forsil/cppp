#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

int main ()
{
  vector<string> text;
  string word;
  while(cin >> word)
    {
      text.push_back(word);
    }
  for(auto &i: text)
    {
      for (auto &c: i)
        {
          c = toupper(c);
        }
      }
  for(auto i: text)
    {
      cout << i << endl;
    }
  return 0;

}
