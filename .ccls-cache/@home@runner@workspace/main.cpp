
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream InFile("LineUp.txt");
  string name;
// Check if file opened successfully
  if (!InFile) {
    cout << "Error opening file" << endl;
  }
    
