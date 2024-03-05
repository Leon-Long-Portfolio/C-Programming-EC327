#include <iostream>

char convertCharacter(char inputChar, int offset) {
    if (offset == 0) {
        if (isalpha(inputChar)) {
            // Change case
            if (islower(inputChar)) return toupper(inputChar);
            if (isupper(inputChar)) return tolower(inputChar);
        }
        return inputChar;
    } else {
        int newChar = static_cast<int>(inputChar) + offset;
        if (newChar > 126 || newChar < 32) {
            std::cerr << "Error: Resulting character is out of valid range." << std::endl;
            exit(1);
        }
        return static_cast<char>(newChar);
    }
}

int main() {
    char userChar;
    int offset;
    
    std::cout << "Enter character: ";
    std::cin >> userChar;
    std::cout << "Offset (enter 0 to convert case): ";
    std::cin >> offset;
    
    char newChar = convertCharacter(userChar, offset);
    std::cout << "New character: " << newChar << std::endl;
    
    return 0;
}
