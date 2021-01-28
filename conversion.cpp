#include <iostream>
using namespace std;


/* Gets the feet and inches from user, returns total number of inches so that
   the function can return one value and pass it to the next function. If user
   types "exit", it breaks from the bottom while loop and ends the program.
   Negative inputs will prompt the user again for a positive measurement
*/
double feetInchesInput() {
  string feet;
  string inches;
  double totalInches;

  cout << "Enter the feet and inches of your measurement (non-negative) to convert to meters and centimeters. Type 'exit' to cancel." << endl;
  while (true) {
    cout << "Feet: ";
    cin >> feet;
    if (feet == "exit") {return -1;}
    else if (stod(feet) < 0) {
      cout << "Please enter a positive measurement." << endl;
      continue;
    }
    else {break;}
  }
  while (true) {
    cout << "Inches: ";
    cin >> inches;
    if (inches == "exit") {return -1;}
    else if (stod(inches) < 0) {
      cout << "Please enter a positive measurement." << endl;
      continue;
    }
    else {break;}
  }

  totalInches = (stod(feet) * 12.0) + stod(inches);
  return totalInches;
}


/* Converts totalInches to meters and centimeters, returns total number of centimeters
   so that the function can return one value and pass it to the next function
*/
double inchesToCm(double inches) {
  double totalCm;
  totalCm = (inches / 12.0) * 0.3048 * 100;
  return totalCm;
}


/* Converts totalInches to meters and centimeters, returns total number of centimeters
   so that the function can return one value and pass it to the next function
*/
void metersCmOutput(double cm) {
  int meters;
  double centimeters;

  meters = cm / 100;
  centimeters = cm - (100*meters);

  cout << "This measurement converts to " << meters << " meters and " << centimeters << " centimeters." << endl;
  cout << endl;
}




int main() {
double x;

while (true) {
  x = feetInchesInput();
  if (x == -1) {break;}
  else {metersCmOutput(inchesToCm(x));}
}

return 0;
}
