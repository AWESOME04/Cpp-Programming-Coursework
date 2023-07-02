#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));
  int targets = rand() % 100 + 1;
  int guess = 0;
  int no_attempts = 0;

  cout << "The Number Guessing Game" << endl;
  cout << "A number is chosen between 1 and 100. Can you guess the number?" << endl;

  do {
    cout << "Enter your guess for any number between 1 and 100: ";
    cin >> guess;
    ++no_attempts;

    if (guess > targets) {

      cout << "Number is too high. Try again." << endl;
    } else if (guess < targets) {
      cout << "Number is too low. Try again." << endl;
    } else {
      cout << "Good Job! You found the number in " << no_attempts << " attempts." << endl;
    }
  } while (guess != targets);

  return 0;
}

