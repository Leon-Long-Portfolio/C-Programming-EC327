#include <iostream>
#include <bitset>

int hammingDistanceHex(int x, int y) {
    int xorResult = x ^ y;
    int distance = 0;

    while (xorResult > 0) {
        distance += xorResult & 1;
        xorResult >>= 1;
    }

    return distance;
}

int main() {
    int num1, num2;
    std::cout << "Enter two positive integers: ";
    std::cin >> num1 >> num2;

    int distance = hammingDistanceHex(num1, num2);
    std::cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in hex format is: " << distance << std::endl;

    return 0;
}
