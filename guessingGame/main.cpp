#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int randomNum = (rand() % 100) + 1, userGuess, attempts = 0;

    while(userGuess != randomNum){
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;

        while(!cin){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Not a number! Guess again: ";
            cin >> userGuess;
        }

        attempts++;

        if(attempts == 5){
            cout << "You lose!" << endl;
            break;
        } else if(userGuess > randomNum){
            cout << "Guess lower! You have " << 5 - attempts << " " << (attempts == 4 ? "attempt" : "attempts") << " left." << endl;
        } else if(userGuess < randomNum){
            cout << "Guess higher! You have " << 5 - attempts << " " << (attempts == 4 ? "attempt" : "attempts") << " left." << endl;
        } else {
            cout << "You win! The number was " << randomNum << "." << endl;
        }
    }

    return 0;
}