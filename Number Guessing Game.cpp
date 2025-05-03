#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    std::srand(std::time(0));  // Seed random number generator
    char playAgain;

    do {
        int numberToGuess = std::rand() % 100 + 1;
        int guess;
        int attempts = 0;

        std::cout << "The number between 1 and 100." << std::endl;

        do {
            std::cout << "Enter your guess: ";
            std::cin >> guess;
            attempts++;

            if (guess < numberToGuess) {
                std::cout << "Too low! Try again." << std::endl;
            } else if (guess > numberToGuess) {
                std::cout << "Too high! Try again." << std::endl;
            } else {
                std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            }
        } while (guess != numberToGuess);

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank you for playing!" << std::endl;
    return 0;
}