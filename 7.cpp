//1 2 3
//4 5 6
//7 8 9
//10 11 12 13
//14 15 16 17 18
//19 20 21 22 23 24


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while ( i <= 3 )
    {
        int j = 1;
        while ( j <= 3 )
        {
            cout << count <<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    int k = 4;
    while ( k <= n )
    {
        int j = 1;
        while ( j <= k )
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        k++;
    }
}
