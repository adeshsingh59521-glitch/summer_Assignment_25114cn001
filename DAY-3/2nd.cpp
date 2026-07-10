#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start and end: ";
    cin >> start >> end;

    for(int num = start; num <= end; num++) {
        bool isPrime = true;
        if(num <= 1) continue;

        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout << num << " ";
    }
    return 0;
}
