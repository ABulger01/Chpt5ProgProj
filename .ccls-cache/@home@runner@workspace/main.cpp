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
    sting firstName;
  