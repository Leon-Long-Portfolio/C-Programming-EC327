#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));

    int userChoice;
    std::cout << "Choose Rock (0), Paper (1), or Scissors (2): ";
    std::cin >> userChoice;
    if (userChoice > 2 || userChoice < 0){
        std::cout << "Invalid Input!" << std::endl;
        return 0;
    }
   

    int computerChoice = std::rand() % 3; // Generates 0, 1, or 2
    std::string choices[3] = {"Rock", "Paper", "Scissors"};
    std::cout << "Computer chooses: " << choices[computerChoice] << std::endl;

    if (userChoice == computerChoice) {
        std::cout << "You tie!" << std::endl;
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "You lose!" << std::endl;
    }

    return 0;
}
