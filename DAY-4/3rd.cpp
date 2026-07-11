#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, temp;
    cout << "Enter number: ";
    cin >> num;

    temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == num)
        cout << num << " is Armstrong";
    else
        cout << num << " is not Armstrong";

    return 0;
}
