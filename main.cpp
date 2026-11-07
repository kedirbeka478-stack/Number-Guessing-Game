#include <iostream>
using namespace std;

int main() {
  int low = 1;
  int high = 100;
  int middle;

  cout << "************************** Number Guessing Game **************************\n";
  cout << endl;
  cout << "Guess a number b/n [1 - 100]\n";
  cout << "Answer using (y/n).\n";
  cout << "Have you guessed? (y/n)\n";
  
  char answer;
  cin>>answer;

  while (answer != 'y' && answer != 'n') {
      cout << "Please Enter only (y/n).\n";
      cin>>answer;
    }

  while (low < high) {

    middle = (low + high)/2;

    cout << endl;
    
    cout << "Is your number less than or equal to " << middle << endl;
    cin >> answer;

    while (answer != 'y' && answer != 'n') {
      cout << "Please Enter only (y/n).\n";
      cin>>answer;
    }

    if (answer == 'y') {
      high = middle;
    } else if (answer == 'n') {
      low = middle + 1;
    }
  }

  cout << endl;
  cout << "Your number is " << middle << endl;
}