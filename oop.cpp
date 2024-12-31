#include <iostream>
using namespace std;

class Fraction {
    private:
        int num, den; // instance variables (in C++ and Java member variables)
    public:
        Fraction() { 
            num = 0; den = 1;
        }
        Fraction(int n) { 
            num = n; den = 1;
        }
        Fraction(int n, int d) {
            num = n; den = d;
        }
        // in order to promise not to change the object, put const after the parameters
        void print() const {
            cout << num << "/" << den << "\n";
        }
        friend ostream& operator <<(ostream& s, Fraction f) {
            s << f.num << '/' << f.den;
            return s;
        }
};

int main() {
   Fraction f1; // f1.num = 0 f1.den = 1
    Fraction f2(2); // f2.num = 2 f2.den =
    Fraction f3(2, 3); // f2.num = 2 f2.den = 3;

    f1.print();
    const Fraction f4(1, 2);
    f4.print();
    return 0;
}