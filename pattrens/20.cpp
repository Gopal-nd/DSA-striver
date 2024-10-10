#include <bits/stdc++.h>
using namespace std;

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
int main()
{
    int n = 5;
    int s = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int s1 = i;
        if (i > n)
            s1 = (2 * n) - i;
        for (int j = 1; j <= s1; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= s1; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            s -= 2;
        else
            s += 2;
    }

    return 0;
}
