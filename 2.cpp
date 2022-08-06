//Pattern-2

//1 2 3
//1 2 3
//1 2 3
//1 2 3


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while ( i <= n )
    {
        int j = 1;
        while (j <= 3)
        {
            cout << j << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
}
