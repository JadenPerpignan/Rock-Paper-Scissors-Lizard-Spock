#include <iostream>
#include <stdlib.h>

int main ( ) {

/*
 scissors cuts paper
 paper covers rock
 rock crushes lizard
 lizard poisons spock
 spock smashes scissors
 scissors decapitates lizard
 lizard eats paper
 paper disproves spock
 spock vaporizes rock
 rock crushes scissors
*/

    srand ( time ( NULL ));

    int computer = rand ( ) % 3 + 1;

    int user = 0;

    std::cout << "======================\n";
    std::cout << "Rock, Paper, Scissors!\n";
    std::cout << "======================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cin >> user;
    std::cout << "shoot! \n";

    std::cout << "User: " << user << "\n";
    std::cout << "Computer: " << computer << "\n";

    if ( user == 1 && computer == 1 ) {

        std::cout << "Tie! Both user and computer through rock.\n";

    } else if ( user == 1 && computer == 2 ) {

        std::cout << "Computer Wins! Paper covers Rock.\n";
    } else if ( user == 1 && computer == 3 ) {

        std::cout << "User Wins! Rock crushes scissors.\n";
    } else if ( user == 2 && computer == 1 ) {

        std::cout << "User Wins! Paper covers rock.\n";
    } else if ( user == 2 && computer == 2 ) {

        std::cout << "Tie! Both user and computer through paper.\n";
    } else if ( user == 2 && computer == 3 ) {

        std::cout << "Computer Wins! Scissors cuts paper.\n";

    } else if ( user == 3 && computer == 1 ) {

        std::cout << "Computer Wins! Rock crushes scissors.\n";
    } else if ( user == 3 && computer == 2 ) {

        std::cout << "User Wins! Scissors cut paper.\n";
    } else if ( user == 3 && computer == 3 ) {

        std::cout << "Tie! Both user and computer through paper.\n";

    } else
        std::cout << "Invalid User Input!\n";

}



