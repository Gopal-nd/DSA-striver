

#include <bits/stdc++.h>
using namespace std;
// 1*
// 2**
// 3***
// 4****
// 5*****
// 6****
// 7***
// 8**
// 9*
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
