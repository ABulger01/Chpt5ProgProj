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
    cout << "Enter the average daily increase as a percentage: ";
    cin >> avgDailyincrease;
  if ( avgDailyincrease < 0) {
    cout << "Invalid input. The average daily increase must be a positive number." << endl;
    cout << "Enter the average daily increase: ";
    cin >> avgDailyincrease;
  }
    cout << "Enter the number of days they will multiply: ";
    cin >> daysMultiply;
  if ( daysMultiply < 1) {
    cout << "Invalid input. The number of days must be at least 1 day" << endl;
    cout << "Enter the number of days they will multiply: ";
    cin >> daysMultiply;
  }
// Convert the percentage
    avgDailyincrease = avgDailyincrease / 100;

  // Display the population growth for each day
  cout << fixed << setprecision(2) << endl;
    cout << "Day\tPopulation" << endl;
    cout << "-----------------\n";
    for (int day = 1; day <= daysMultiply; ++day) {
        cout << day << "\t" << numberOfOrganisms << endl;
        numberOfOrganisms += numberOfOrganisms * avgDailyincrease;
    }
    return 0;
}  
      
    
   
      
  
   
    
    
  