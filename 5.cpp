//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while ( i <= n )
    {
        int j = 1;
        while (j <= 5)
        {
            cout << count << " ";;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
