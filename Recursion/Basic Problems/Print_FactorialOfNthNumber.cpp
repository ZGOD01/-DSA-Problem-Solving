#include <iostream>

using namespace std;

int function(int i, int fact) {
    if (i < 0) {
        return fact;
    }
    return function(i - 1, fact * i);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Calculate factorial
    int factorial = function(n, 1);
    
    // Print the factorial
    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
