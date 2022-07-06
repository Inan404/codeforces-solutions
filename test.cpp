// TC: O(n), where n = size of the array
// SC: O(1)
#include <bits/stdc++.h>
using namespace std;

void recursion(int n)
{
  // closing condition
  if (n <= 5)
  {
    recursion(n-5+1);
  }

  cout<<n<<endl;
}

int main()
{
  recursion(5);
  return 0;
