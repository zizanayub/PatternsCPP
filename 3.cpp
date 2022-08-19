// 4 3 2 1
// 4 3 2 1
// 4 3 2 1 
// 4 3 2 1



#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while ( j <= n )
    {
      cout << 4 - j + 1 << " ";
      j++;
    }
    i++;
    cout << endl;
  }
}

    
