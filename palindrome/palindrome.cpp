#include "palindrome.h"

int main(void) {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  for (int i = 0, j = input.size() - 1; i < j; i++, j--) {
    if (input[i] != input[j]) {
      cout << input << ": is not a palindrome!" << endl;
      return 0;
    }
  }

  cout << input << ": is a palindrome!" << endl;
  return 0;
}
