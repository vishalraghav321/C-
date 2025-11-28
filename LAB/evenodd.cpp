#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;


    (num % 2 == 0) ? cout << "The number is Even." : cout << "The number is Odd.";

    return 0;
}
