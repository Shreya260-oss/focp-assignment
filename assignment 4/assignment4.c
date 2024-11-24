#include <stdio.h>

int main() {
    int computerChoice; 
    char userChoice;

    
    computerChoice = 1;

    
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter 'R' for Rock, 'P' for Paper, or 'S' for Scissors: ");
    scanf(" %c", &userChoice);

    
    if (computerChoice == 0) printf("Computer chose: Rock\n");
    else if (computerChoice == 1) printf("Computer chose: Paper\n");
    else printf("Computer chose: Scissors\n");

    
    if ((userChoice == 'R' && computerChoice == 2) || 
        (userChoice == 'P' && computerChoice == 0) || 
        (userChoice == 'S' && computerChoice == 1)) { 
        printf("You win!\n");
    } else if ((userChoice == 'R' && computerChoice == 1) || 
               (userChoice == 'P' && computerChoice == 2) || 
               (userChoice == 'S' && computerChoice == 0)) { 
        printf("Computer wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
