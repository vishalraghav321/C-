#include <iostream>
using namespace std;

void printFib(int n, int a, int b) {
    if (n == 0) return;       // stop recursion

    cout << a << " ";         // print current term
    printFib(n - 1, b, a + b);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    printFib(n, 0, 1);       // start with F0 = 0, F1 = 1
    return 0;
}
