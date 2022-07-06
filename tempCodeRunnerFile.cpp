#include <bits/stdc++.h>
using namespace std;

void toUpper(string &str)
{
  for (int i = 0; i < str.size(); i++)
  {
    str[i] = toupper(str[i]);
  }
}

void toLower(string &str)
{
  for (int i = 0; i < str.size(); i++)
  {
    str[i] = tolower(str[i]);
  }
}

int main()
{
  string s;
  int uppr = 0, lwr = 0;

  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 65 && s[i] <= 90)
      uppr++;
    else
      lwr++;
  }

  if (uppr > lwr)
    toUpper(s);
  else
    toLower(s);

  cout << s << endl;

  return 0;
}