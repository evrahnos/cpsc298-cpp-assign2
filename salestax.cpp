#include <iostream>
using namespace std;

// Changes the "cost" variable to the updated cost at the same address
float addTax(float taxRate, float &cost) {
  cost += cost * (taxRate / 100.0);
  return cost;
}

// Gets cost and tax rate from user, outputs the total cost with added tax
int main() {
  float cost;
  float tax;

  cout << "Cost ($): ";
  cin >> cost;
  cout << "Tax Rate (%): ";
  cin >> tax;
  cout << "The total cost with added tax is: $" << addTax(tax, cost) << endl;


return 0;
}
