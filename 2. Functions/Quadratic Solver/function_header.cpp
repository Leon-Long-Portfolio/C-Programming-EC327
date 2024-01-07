#include "function_header.h"

// Square root function
double sqrt(double N, double tol) {
    double guess = N;
    while (tol <= abs(guess - N / guess) / min(guess, N / guess)) {
        guess = (guess + N / guess) / 2;
    }
    return guess;
}

double positiveX(int a, int b, int c, double tol) {
    double discriminant = sqrt(b * b - 4 * a * c, tol);
    return (-b + discriminant) / (2 * a);
}

double negativeX(int a, int b, int c, double tol) {
    double discriminant = sqrt(b * b - 4 * a * c, tol);
    return (-b - discriminant) / (2 * a);
}
