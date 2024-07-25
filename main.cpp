#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    string choices[] = {"Rock", "Paper", "Scissors"};
    return choices[rand() % 3];
}

string getPlayerChoice() {
    string choice;
    cout << "Enter Rock, Paper, or Scissors: ";
    cin >> choice;
    return choice;
}

void determineWinner(string playerChoice, string computerChoice) {
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == "Rock" && computerChoice == "Scissors") ||
               (playerChoice == "Paper" && computerChoice == "Rock") ||
               (playerChoice == "Scissors" && computerChoice == "Paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    srand(time(0));

    string playerChoice = getPlayerChoice();
    string computerChoice = getComputerChoice();

    cout << "Computer chose: " << computerChoice << endl;

    determineWinner(playerChoice, computerChoice);

    return 0;
}
