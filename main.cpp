#include <iostream>
#include <fstream>
using namespace std;
int main() {
ifstream inputFile("LineUp.txt");  // Open the file
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string name;
    string firstName;
    int count = 0;
  
  // Read each name from the file and find the first name in alphabetical order
    while (inputFile >> name) {
        if (count == 0) {
            firstName = name;
        } else {
            if (name < firstName)
                firstName = name;
        }
        count++;
    }
    inputFile.close();
    cout << "The student at the front of the line is: " << firstName
  
  
    }