
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("attached_assets/LineUp.txt");
    string name;
    
    cout << "Names in the lineup:" << endl;
    cout << "-----------------" << endl;
    
    while (getline(inFile, name)) {
        cout << name << endl;
    }
    
    inFile.close();
    return 0;
}
