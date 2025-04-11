#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int numberOfOrganisms;
    int daysMultiply;
    double avgDailyincrease;

    cout << "Enter the starting number of organisms: ";
    cin >> numberOfOrganisms;
  if ( numberOfOrganisms < 2) {
    cout << "Invalid input. The starting number of organisms must be at least 2." << endl;
    cout << "Enter the starting number of organisms: ";
    cin >> numberOfOrganisms;
  }
    cout << "Enter the average daily increase: ";
    cin >> avgDailyincrease;
  if ( avgDailyincrease < 0) {
    cout << "Invalid input. The average daily increase must be a positive number." << endl;
    cout << "Enter the average daily increase: ";
    cin >> avgDailyincrease;
  }
  
    
  