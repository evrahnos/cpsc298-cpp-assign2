#include <iostream>
using namespace std;

// Changes the variables at the given addresses to 0
void zeroBoth(int &num1, int &num2) {
  num1 = 0;
  num2 = 0;
}


int main() {
  int input1, input2;

// Gets two integers from user and outputs the result of the zeroBoth function
  cout << "Enter two integers: " << endl;
  cin >> input1;
  cin >> input2;
  cout << "Implementing zeroBoth function..." << endl;
  zeroBoth(input1, input2);
  cout << "Your numbers are now: " << endl;
  cout << input1 << endl;
  cout << input2 << endl;



return 0;
}
