#include "combinatorics.h"

int main() {
    char again;

    do {
        int N, r;
        cout << "How many coins would you like to flip? ";
        cin >> N;
        cout << "How many heads do you want? ";
        cin >> r;

        int ways = choose(N, r);
        cout << "Flipping " << N << " coins, we can get " << r << " heads " << ways << " ways.\n";

        cout << "Flip again? (y/n) ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Program ends\n";
    return 0;
}