#include "SpecialDivision.h"

int main() {
  double numerator, denominator;
  cout << "Enter numerator: ";
  cin >> numerator;
  cout << "Enter denominator: ";
  cin >> denominator;
  if (denominator == 0) {
    cout << "Can't divide by zero!" << endl;
    return 1;
  }

  cout << numerator << " / " << denominator << " = ";
  cout << exp(log(numerator) - log(denominator)) << endl;
  return 0;
}
