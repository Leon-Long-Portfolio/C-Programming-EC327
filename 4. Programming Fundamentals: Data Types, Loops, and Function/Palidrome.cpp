#include <iostream>
#include <string>

bool isPalindrome(const std::string &number) {
    int start = 0;
    int end = number.size() - 1;
    
    while (start < end) {
        if (number[start] != number[end]) {
            return false;
        }
        ++start;
        --end;
    }
    
    return true;
}

int main() {
    std::string number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << "The number " << number << " is a palindrome." << std::endl;
    } else {
        std::cout << "The number " << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
