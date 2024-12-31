#include <iostream>

using namespace std;

class complex{
    private:
        double real, imag;
    public:
        friend complex operator -(complex c) { //unary
            return complex(-c.real, -c.imag);
        }
        complex() {
            real = 0;
            imag = 0;
        }
        complex(double r, double i) {
            real = r;
            imag = i;
        }
        complex(double r) {
            real = r;
            imag = 0;
        }

};

int main() {
    complex a(1.5, 2.5);
    complex b(3.0); //imag = 0
    complex c; // real = imag = 0 Notice, NO paranthese for no parameters
    complex d(); // d is NOT an object but a function

    complex e = a + b; // define complex addition by using a friend operator
    complex f = a - b;
    complex g = a * b;
    complex h = -a; // unary operator
    cout << "e=" << e << "\n";
    cout << "f=" << f << "\n";
    cout << "g=" << g << "\n";

    return 0;
}