#include "calculator.h"

int main() {
    double checkoutAmount, amountTendered;
    cout << "What is the checkout amount? $";
    cin >> checkoutAmount;

    cout << "What is the amount tendered? $";
    cin >> amountTendered;

    if (amountTendered < checkoutAmount) {
        cout << "Insufficient amount tendered." << endl;
        return 1;
    }

    double change = amountTendered - checkoutAmount;

    int bills = dollarbills(checkoutAmount, amountTendered);
    change -= bills;

    int quartersCount = quarters(change);
    change -= quartersCount * 0.25;

    int dimesCount = dimes(change);
    change -= dimesCount * 0.10;

    int nickelsCount = nickels(change);
    change -= nickelsCount * 0.05;

    int penniesCount = pennies(change);

    cout << "You should return " << bills << " dollar bill(s), " << quartersCount << " quarter(s), "
              << dimesCount << " dime(s), " << nickelsCount << " nickel(s), and " << penniesCount << " penny(ies)." << endl;

    return 0;
}
