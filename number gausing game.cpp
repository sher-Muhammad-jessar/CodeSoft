#include <iostream>
#include <cstdlib>
#include <ctime>

 using namespace std; 
  
class NumberGuessingGame {
private:
    int targetNumber;
    int playerGuess;
    bool hasGuessedCorrectly;

public:
    NumberGuessingGame() {
        srand(static_cast<unsigned>(std::time(0)));
        targetNumber = rand() % 100 + 1;
        hasGuessedCorrectly = false;
    }

    void playGame() {
    	cout<<" +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
        cout <<"  Welcome to the Number Guessing Game!\n";
         cout<<"-----------------------------------------------\n";
        cout << "Try to guess the number between 1 and 100.\n";
        cout<<" +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";

        while (!hasGuessedCorrectly) {
            cout << "Enter your guess: ";
            cin >> playerGuess;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(256, '\n');
                cout << "Invalid input. Please enter a valid number.\n";
                continue;
            }

            if (playerGuess < targetNumber) {
            	cout<<"\n---------------------\n";
                cout<<"| Too low! Try again.|\n";
                cout<<"---------------------\n\n";
            } else if (playerGuess > targetNumber) {
            	cout<<"---------------------\n\n";
                cout<<"|Too high! Try again.|\n";
                cout<<"---------------------\n\n";
            } else {
            	cout<<"---------------------------------------------------\n";
                cout <<"|Congratulations! You guessed the correct number.|\n";
                cout<<"---------------------------------------------------\n\n";
                hasGuessedCorrectly = true;
            }
        }
    }
};

int main() {
    NumberGuessingGame game;
    game.playGame();

    return 0;
}

