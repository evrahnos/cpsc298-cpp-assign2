#include <iostream>
using namespace std;

int main() {

int number;
int i = 0;
int numberArray[10];

// Gets 10 non-negative integers from the user. If integer is negative, it will re-ask for one
while (i < 10) {
  cout << "Enter non-negative integer #" << i+1 << ": ";
  cin >> number;
  if (number >= 0) {
    numberArray[i] = number;
    ++i;
  }
}

// Displays the contents of the array
for (i=0; i<10; ++i) {
  cout << numberArray[i] << " ";
}

cout << endl;


return 0;
}
