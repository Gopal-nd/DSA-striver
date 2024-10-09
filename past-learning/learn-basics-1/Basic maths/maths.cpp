#include <bits/stdc++.h>
using namespace std;

void extractionOfDegits(int num)
{
    int n = 0;
    // while(num!=0){
    //     int degit = num%10;
    //     cout << degit<< endl;
    //     num=num/10;
    //     n++;
    // }
    n = log10(num) + 1;
    cout << "numbers : " << n << endl;
}

void reverseDegits(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        int degit = num % 10;
        reverse = reverse * 10 + degit;
        // cout << reverse<< endl;
        num = num / 10;
    }
    cout << reverse << endl;
}

void chechPalindrom(int num)
{
    int original = num;
    int reverse = 0;
    while (num > 0)
    {
        int degit = num % 10;
        reverse = reverse * 10 + degit;
        num = num / 10;
    }
    if (original == reverse)
    {
        cout << true;
    }
    else
    {
        cout << false << endl;
    }
}

void armstrong(int num)
{
    // where  the sum of number of cubes is number itself

    // ex. 371  = 3*3 7*3 1*3 = 371
    int armstrong = 0;
    int original = num;
    while (num > 0)
    {
        int degit = num % 10;
        armstrong = armstrong + (degit * degit * degit);
        num = num / 10;
    }
    if (armstrong == original)
        cout << true << endl;
    else
        cout << false << endl;
}

void printAllDevisors(int num)
{
    vector<int> v;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            v.push_back(i);
            if ((num % i) != 1)
            {
                cout << num / i << endl;

                v.push_back(num / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }

    // for (int i=1;i<=num;i++){
    //     if(num%i==0){
    //         cout << i<< endl ;
    //     }
    // }
}

void primeNumber(int num){
    int prime =0;
for(int i=i;i<=sqrt(num);i++){
    if(num%i==0){
        prime++;
        if((num%i)!=i){
            prime++;
        }
    }

}
if(prime==2){
    cout << prime<< " is a prime number" << endl;
}else{

    cout << prime<< " is not a prime number" << endl;
}
}

int GCD(int n,int m){
    int gcd=1;

int l =  min(n,m);
for(int i=1;i<=l;i++){
    if(n%i==0 && m%i==0){
        gcd=i;
    }
}
cout << gcd<< endl;
return gcd;

}


//eucliden ALgoritham
void euclide(int n,int m){
    if(!n>0 && !m>0) exit;
    int s = min(n,m);
    int l = max(n,m);
    // cout << "min : " << s << " Max : "<< l;
int min = s%l;
if(GCD(s,l)==GCD(min,l)){
cout << true<< endl;
}else{

    cout << "false" << endl;
}

}

int main()
{
    // reverseDegits(123456);
    // extractionOfDegits(123456);
    // chechPalindrom(1334331);
    // armstrong(371);
    // printAllDevisors(45);
    // primeNumber(5);
    // GCD(100,200);
    euclide(34,44);
    return 0;
}
