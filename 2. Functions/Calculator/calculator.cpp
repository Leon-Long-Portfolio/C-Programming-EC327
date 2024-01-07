#include "calculator.h"

double dollarbills(double cost, double tendered) {
    return static_cast <int> ((tendered - cost) / 1);
}

double quarters(double remaining) {
    return static_cast <int> (remaining / 0.25);
}

double dimes(double remaining) {
    return static_cast <int> (remaining / 0.10);
}

double nickels(double remaining) {
    return static_cast <int> (remaining / 0.05);
}

double pennies(double remaining) {
    return static_cast <int> (ceil(remaining / 0.01));
}
