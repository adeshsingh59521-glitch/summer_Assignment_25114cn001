#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0 || n == 1)   // base case
        return 1;
    return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Factorial = " << factorial(num);
    return 0;
}
