//1 2 3
//1 4 9
//1 8 27

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while ( i <= n )
    {
        int j = 1;
        while ( j <= n )
        {
            cout << pow(j,i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
