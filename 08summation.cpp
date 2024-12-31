#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float a = 1; // a = 1.0f
    float b = 2.5; 
    float c = 0;
    float d = a + b;

    // s = sign (+/-) 0=positive
    // e = exponent -127 ... +127
    // m = mantissa digits of the number
    // seeeeeeeemmmmmmmmmmmmmmmmmmmmmmmmm
    // .1 = 1/2
    // .01 = 1/4
    // .001 = 1/8
    // 101.110 = 5.75
    for(float x = 0; x <= 10; x += 0.1) {
        cout << x << ' ';
    }
    cout << '\n';

    d = a + b;
    d = a - b;
    d = a * b;
    d = a / b; // no mod for floating point
    d = pow(a, b); // no exponentiation operator in C. ^ is for bitwise XOR

    d = floor(d);
    d = ceil(d);
    d = round(d);
    d = trunc(d);
    d = fabs(d);
    d = fmod(d, 2);

    float sum = 0;
    for(int i = 1; i <= 10; i++) {
        sum += 1.0/i;
    }

    float sum2 = 0;
    for(float i = 1; i <= 10; i++) {
        sum += 1/i;
    }

    return 0;
}