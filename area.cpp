#include <iostream>
using namespace std;

int main() {
    float radius, side, length, breadth;
    float areaCircle, areaSquare, areaRectangle;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    areaCircle = 3.14 * radius * radius;
    cout << "Area of Circle = " << areaCircle << endl;
    areaSquare = side * side;
    cout << "Area of Square = " << areaSquare << endl;
    areaRectangle = length * breadth;
    cout << "Area of Rectangle = " << areaRectangle << endl;

    return 0;
}
