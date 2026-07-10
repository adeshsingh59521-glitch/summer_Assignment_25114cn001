#include <iostream>
using namespace std ;
int main() {
    int n, sum = 0;
    cout<<"enter the n"<<endl;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << sum;
    return 0;
}