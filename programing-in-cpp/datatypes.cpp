#include <iostream>
using namespace std;

int main(){
// data types is used to store the data


// integer 

    int a;  //  4 Bytes   store from -2.147 billion to +2.147 billon
    int b = 9;

    long c;

    long long d;

    float e = 5.6442323;

    double f = 4.28793848; // 8 Bytes

// charecters (string)

    string g;   // it will take the first word 
    cin >> g;   // e.g 'hi there' it will take only 'hi'
    cout <<g;

    // to take entire line 
    string h;
    getline(cin,h);
    cout << h << '\n';

    // char 

    char i;
    i='y';


    return 0;
}