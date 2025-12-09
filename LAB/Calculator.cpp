#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b){ return a+b; }
    float sub(float a, float b){ return a-b; }
    float mul(float a, float b){ return a*b; }
    float divi(float a, float b){ return a/b; }
};

int main(){
    Calculator c;
    float x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Add = " << c.add(x,y) << endl;
    cout << "Sub = " << c.sub(x,y) << endl;
    cout << "Mul = " << c.mul(x,y) << endl;
    cout << "Div = " << c.divi(x,y) << endl;
    
    return 0;
}
