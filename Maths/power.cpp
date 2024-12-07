#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;  // base^0 = 1
    }

    if (exponent % 2 == 0) {
        int half = power(base, exponent / 2);
        return half * half;  // Even exponent: base^n = (base^(n/2))^2
    } else {
        return base * power(base, exponent - 1);  // Odd exponent: base^n = base * base^(n-1)
    }
}

int main() {
    int base = 2;
    int exponent = 10;
    
    int result = power(base, exponent);
    cout << base << "^" << exponent << " = " << result << endl;
    
    return 0;
}

