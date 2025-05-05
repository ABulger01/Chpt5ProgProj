#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Pattern A Loop
  cout << "Pattern A" << endl;
  for (int i = 1; i <= 10; ++i) {
    for (int j = 1; j <= i; ++j) {
      cout << "+";
    }
    cout << " ";
    for (int j = 10; j >= i; --j) {
      cout << "+";
    }
    cout << endl;
  }

  // Pattern B Loop
  cout << "Pattern B" << endl;
    
    
    
    
  }