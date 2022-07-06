#include <bits/stdc++.h>
using namespace std;

int yearRequired(int &n, vector<int> &d, int &b , int&a)
{
  int years = 0;
  for (int i = (a-1); i < b - 1; i++)
  {
    years += d[i];
  }

  return years;
}

int main()
{
  int n, a, b, temp = 0;
  vector<int> d;
  cin >> n;

  for (int i = 0; i < n-1; i++)
  {
    cin >> temp;
    d.push_back(temp);
    temp = 0;
  }


  cin >> a >> b;

  int result = yearRequired(n, d, b, a);

  cout << result << endl;

  return 0;
}