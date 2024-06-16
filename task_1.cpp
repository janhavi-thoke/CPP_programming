#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
    std::srand(static_cast<unsigned int>(std::time(0)));//take any random number
    int random_Number = std::rand() % 100 + 1;//generate no between 1 to 100
    int user_Number = 0;
    
    cout << "Number Guessing Game...............!" <<endl;
    cout << "I have selected a random number between 1 and 100." <<endl;
    cout << "Can you guess what it is?" <<endl;
    while (user_Number != random_Number) {
        cout << "Enter your guess: ";
        cin >> user_Number;
        if (user_Number > random_Number) {
            cout << "Too high! Try again." <<endl;
        } else if (user_Number < random_Number) {
            cout << "Too low! Try again." <<endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" <<endl;
        }
    }

    return 0;
}