#include "FindElementsWithSumInArray.h"

int main() {
  array<int, NUMBER_OF_ITEMS> numbers;

  // Seed the random number generator with current time.
  srand(time(NULL));

  for (unsigned i = 0; i < NUMBER_OF_ITEMS; i++) {
    numbers[i] = getRandomInt();
  }
  displayArray(numbers,"Unsorted");
  sort(numbers.begin(), numbers.end());
  displayArray(numbers, "Sorted");

  int secret_1 = getRandomInt(NUMBER_OF_ITEMS),
      secret_2 = getRandomInt(NUMBER_OF_ITEMS);
  cout << endl << "The two indexes (and numbers) we are adding: " << endl;
  cout << secret_1 << ": " << numbers[secret_1] << endl;
  cout << secret_2 << ": " << numbers[secret_2] << endl;
  long long sum = numbers[secret_1];
  sum += numbers[secret_2];
  cout << "Sum: " << sum << endl;
  sum += getRandomInt(2);
  cout << "Sum (with random noise): " << sum << endl << endl;

  for (unsigned i = 0, j = numbers.size()-1; i < j; ) {
    int left = numbers[i];
    int right = numbers[j];
    int diff = sum - left - right;
    cout << i << ":" << left << ", " << j << ":" << right << " -- " << diff;
    cout << endl;

    if (diff == 0) {
      cout << "Found: " << i << ":" << left << ", " << j << ":" << right << endl;
      return 0;
    }
    else if (diff > 0) {
      i++;
    }
    else j--;
  }
  cout << "Elements adding to " << sum << " not found!" << endl;
  return 0;
}

void displayArray(array<int, NUMBER_OF_ITEMS> numbers, string label) {
  cout << label << ": The array is: ";
  for (unsigned i = 0; i < NUMBER_OF_ITEMS; i++) {
    cout << numbers[i];
    if (i != NUMBER_OF_ITEMS - 1) {
      cout << ", ";
    }
  }
  cout << endl;
}

int getRandomInt(int limit) {
  return rand() % limit;
}
