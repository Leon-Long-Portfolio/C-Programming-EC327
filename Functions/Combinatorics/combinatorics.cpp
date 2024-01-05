#include "combinatorics.h"

int choose(int N, int r) {
    if (r > N)
        return 0;

    if (r > N / 2) 
        r = N - r;
        
    long long result = 1;

    for (int i = 1; i <= r; ++i) {
        result *= N - r + i;
        result /= i;
    }
    return result;
}