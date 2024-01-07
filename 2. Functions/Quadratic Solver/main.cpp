#include "function_header.h"

// Function declarations
double sqrt(double N, double tol);
double positiveX(int a, int b, int c, double tol);
double negativeX(int a, int b, int c, double tol);

int main() {
    char again;

    do {
        int a, b, c;
        double tol;
        
        cout << "What are the coefficients of your quadratic? ";
        cin >> a >> b >> c;

        cout << "What is the tolerance you would like? ";
        cin >> tol;

        double x1 = positiveX(a, b, c, tol);
        double x2 = negativeX(a, b, c, tol);

        cout << "x = (" << x1 << ", " << x2 << ")" << endl;

        cout << "Again? (y/n) ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Program ends\n";
    
    return 0;
}