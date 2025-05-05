// This program generates a random number and asks the user to guess what the number is. If the user's guess is higher than the number the program will say "Too high!" and if the user's guess is lower than the number the program will say "Too Low!" The user will get a certain amount of guesses.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  { 
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;

    int guess;
    int guessCount= 0;
    
   