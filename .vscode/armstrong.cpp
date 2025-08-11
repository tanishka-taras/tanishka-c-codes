#include <iostream>
using namespace std;

int main() {
    int num, origin , remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    origin = num;

    while (origin != 0) {
    
        remainder = origin % 10;
        result += remainder * remainder * remainder;
        origin /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}