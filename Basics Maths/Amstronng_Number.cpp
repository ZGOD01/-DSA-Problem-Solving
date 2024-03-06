#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int sum = 0, originalNumber = number;
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, 3);
        number /= 10;
    }
    return sum == originalNumber;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}
