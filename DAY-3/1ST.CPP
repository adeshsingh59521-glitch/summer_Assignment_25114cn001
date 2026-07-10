#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 0;
    cout << "Enter number: ";
    cin >> num;

    if(num <= 1) {
        cout << num << " is not prime";
        return 0;
    }

    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << num << " is prime";
    else
        cout << num << " is not prime";

    return 0;
}
