#include <iostream>
using namespace std;

int main() {
    float radius, side, length, breadth;
    float areaCircle, areaSquare, areaRectangle;

    cout << "Enter radius of circle: ";
    cin >> radius;
    areaCircle = 3.14159 * radius * radius;
    cout << "Area of Circle = " << areaCircle << endl;

    cout << "Enter side of square: ";
    cin >> side;
    areaSquare = side * side;
    cout << "Area of Square = " << areaSquare << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    areaRectangle = length * breadth;
    cout << "Area of Rectangle = " << areaRectangle << endl;

    return 0;
}
