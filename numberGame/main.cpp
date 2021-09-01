#include <iostream>

using namespace std;

int main() {
    int targetNum = 7;
    int userNum;

    for(int i = 0; i <= 10; i++){
        cout << "Enter any number besides " << targetNum << ": ";
        cin >> userNum;

        if(userNum == 7){
            cout << "You lose!" << endl;
            break;
        }else if(!userNum){
            cout << "You lose! You must enter a number." << endl;
            break;
        }else if(i == 10){
            cout << "You win!" << endl;
            break;
        }
    }

    return 0;
}