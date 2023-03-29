#include <iostream> 
#include "Rational.h"
using namespace std;

int main() {
   Rational c{7, 3};
   Rational d{2, 5};

   Rational x = c + d; // test overloaded operators + and =
   cout << c.toString() << " + " << d.toString() << " = " << x.toString() << "\n";

   x = c - d; // test overloaded operators - and =
   cout << c.toString() << " - " << d.toString() << " = " << x.toString() << "\n";

   x = c * d; // test overloaded operators * and =
   cout << c.toString() << " * " << d.toString() << " = " << x.toString() << "\n";

   x = c / d; // test overloaded operators / and =
   cout << c.toString() << " / " << d.toString() << " = " << x.toString() << "\n";

   cout << boolalpha;

   cout << c.toString() << " == " << d.toString() << " is " << (c == d) << "\n";
   cout << c.toString() << " != " << d.toString() << " is " << (c != d) << "\n";
}
