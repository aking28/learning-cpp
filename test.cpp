#include <iostream>

using namespace std;

int main () {
  cout << "Welcome to Alex's carpet cleaning services!" << endl;

  cout << "\nHow many rooms would you like cleaned?" << endl;

  int number_of_rooms; 
  cin >> number_of_rooms;

  const double pricePerRoom (70);
  const double salesTax (.06);
  const int estimateExpiry (30); //days

  cout << "\nEstimate for number of rooms." << endl;
  cout << "Number of rooms:" << number_of_rooms << endl;
  cout << "Price per room is: $" << pricePerRoom << endl;
  cout << "Cost is $" << number_of_rooms * pricePerRoom << endl;
  cout << "Tax will be $" << number_of_rooms * pricePerRoom * salesTax << endl;
  cout << "=====================================================" << endl;
  cout << "Your total cost will be $" << (number_of_rooms * pricePerRoom) + (number_of_rooms * pricePerRoom * salesTax) << endl;
  cout << "This estimate is valid for estimateExpiry days." << endl;

  cout << endl; 

  return 0; 

}
