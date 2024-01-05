#include "mode.h"
#include <algorithm>
#include <vector>
#include <map>

void findModes(int input[], int size, int& frequency, int result[], int& result_count) {
    std::sort(input, input + size); // Use built-in sort for efficiency

    std::map<int, int> freqMap;
    frequency = 0;

    // Count the frequency of each number
    for (int i = 0; i < size; ++i) {
        freqMap[input[i]]++;
        frequency = std::max(frequency, freqMap[input[i]]);
    }

    // Find modes
    result_count = 0;
    for (const auto& pair : freqMap) {
        if (pair.second == frequency) {
            result[result_count++] = pair.first;
        }
    }
}
