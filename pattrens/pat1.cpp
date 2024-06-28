#include <bits/stdc++.h>
using namespace std;

void pattren1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '#';
        }
        cout << endl;
    }
    // #####
    // #####
    // #####
    // #####
    // #####
}
void pattren2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << '#';
        }
        cout << endl;
    }
    // #
    // ##
    // ###
    // ####
    // #####
}
void pattren3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    //     1
    // 12
    // 123
    // 1234
    // 12345
}

void pattren4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    // 1
    // 22
    // 333
    // 4444
    // 55555
}

void pattren5(int n)
{
    // for(int i=n;i>0;i--){
    //     for (int j=1;j<=i;j++){
    //         cout << '$';
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << '$';
        }
        cout << endl;
    }

    //     $$$$$
    // $$$$
    // $$$
    // $$
    // $
}
void pattren6(int n)
{
    // for(int i=n;i>0;i--){
    //     for (int j=1;j<=i;j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    // 12345
    // 1234
    // 123
    // 12
    // 1
}

void pattren7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space first is
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }

        // for star
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << '$';
        }

        // for second space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }

    //         $
    //    $$$
    //   $$$$$
    //  $$$$$$$
    // $$$$$$$$$
}
void pattren8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space first is
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }

        // for star
        for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
        {
            cout << '$';
        }

        // for second space
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }

    //         $
    //    $$$
    //   $$$$$
    //  $$$$$$$
    // $$$$$$$$$
}
void pattren9(int n)
{
    pattren7(5);
    pattren8(5);

    //         $
    //    $$$
    //   $$$$$
    //  $$$$$$$
    // $$$$$$$$$
    // $$$$$$$$$
    //  $$$$$$$
    //   $$$$$
    //    $$$
    //     $
}

void pattren10(int n)
{
    for (int i = 0; i < n * 2 + 1; i++)
    {
        // for top line
        int stars = i;
        if (i > n)
            stars = (2 * n) - i;
        for (int j = 0; j < stars + 1; j++)
        {
            cout << '#';
        }
        if (stars > n)
        {
            for (int j = 0; j < (2 * n) - i; j++)
            {

                cout << '#';
            }
        }
        cout << endl;
    }
}

void pattren11(int n)
{
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j < i + 1; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }

    //     1
    // 01
    // 101
    // 0101
    // 10101
}

void pattren12(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for number

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        // for space
        for (int j = 0; j < 2 * n - (2 * i + 2); j++)
        {
            cout << ' ';
        }
        // for number

        for (int j = i; j >= 0; j--)
        {
            cout << j + 1;
        }
        cout << endl;
        //         1        1
        // 12      21
        // 123    321
        // 1234  4321
        // 1234554321
    }
}

void pattren13(int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << k + 1 << " ";
            k++;
        }
        cout << endl;
    }

    //     1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
}

void pattren14(int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i + 1; ch++)
        {

            cout << ch;
        }
        cout << endl;
    }

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
}
void pattren15(int n)
{
    int k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (char ch = 'A'; ch < 'A' + i + 1; ch++)
        {

            cout << ch;
        }
        cout << endl;
    }

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
}
void pattren16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            char ans = ch + i;
            cout << ans;
        }
        cout << endl;
    }

    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
}
void pattren17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // sapce
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        // for allphabet
        char start = 'A';
        int revert = (i * 2 + 1) / 2;
        // cout << revert;
        for (int j = 1; j <= i * 2 + 1; j++)
        {

            cout << start;
            if (j <= revert)
                start++;
            else
                start--;

            // for ()
        }
        // sapce
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }

    //         A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA
}

void pattren18(int n)
{
    for (int i = 0; i < n; i++)
    {
        // char ch='A'+n;
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            // char ans = ch+i;
            cout << ch;
            // ch--;
        }
        cout << endl;
    }

    //     E
    // DE
    // CDE
    // BCDE
    // ABCDE
}


int pattren20(int n){
for(int i=0;i<n;i++){
    for (int j=0;j<i+1;j++){
        cout<< '*';
    }

    for(int j=0;j<(2*n)-(2*i+2);j++){
        cout<<' ';
    }

    for (int j=0;j<i+1;j++){
        cout<< '*';
    }
    cout << endl;
  }
  for (int i=1;i<n;i++){
    for (int j=0;j<n-i;j++){
        cout << '*';
    }
    for (int j=0;j<2*i;j++){
        cout << ' ';
    }
      for (int j=0;j<n-i;j++){
        cout << '*';
    }
    cout << endl;
  }
// *                  *
// **                **
// ***              ***
// ****            ****
// *****          *****
// ******        ******
// *******      *******
// ********    ********
// *********  *********
// ********************
// *********  *********
// ********    ********
// *******      *******
// ******        ******
// *****          *****
// ****            ****
// ***              ***
// **                **
// *                  *


}


void pattren19(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j < n - i + 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * n - 2 * i - 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
    // ********************
    // *********  *********
    // ********    ********
    // *******      *******
    // ******        ******
    // *****          *****
    // ****            ****
    // ***              ***
    // **                **
    // *                  *
    // *                  *
    // **                **
    // ***              ***
    // ****            ****
    // *****          *****
    // ******        ******
    // *******      *******
    // ********    ********
    // *********  *********
    // ********************
}

void pattren21(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout << '*';
            }else{
                cout << " ";
            }
        }
cout << endl;
    }
}

void pattren22(int n){
    for (int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top =i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout <<n- (min(min(top,bottom),min(left,right)));
        }
        cout << endl;
    }


// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

}



int main()
{
    pattren22(4);

    return 0;
}