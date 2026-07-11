#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;
    cout << "Enter n: ";
    cin >> n;

    if(n == 1) {
        cout << "Nth term = " << a;
        return 0;
    }
    if(n == 2) {
        cout << "Nth term = " << b;
        return 0;
    }

    for(int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    cout << "Nth term = " << b;
    return 0;
}
