#include <iostream>

using namespace std;

double const PI = 3.14159;

void exercise1 (){
    int x = 0, y = 0;
    cout << "Arithmetic operations. Please enter numbers and hit enter:" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "Results:" << endl;
    cout << "x + y = " << x+y << endl;
    cout << "x * y = " << x*y << endl;
    cout << "x - y = " << x-y << endl;
    cout << "x / y = " << x/y << endl;
}

void exercise2 (){
    int radius = 0;
    cout << "Please enter radius of circle and hit enter:" << endl;
    cout << "Radius = "; cin >> radius;
    if(radius<0){
        cout << "Radius has to be greater than zero!" << endl;
        return;
    }
    cout << "Diameter: " << 2*radius << endl;
    cout << "Circle: " << 2*radius*PI << endl;
    cout << "Area: " << radius*radius*PI << endl;
}



int exercises()
{
//    exercise1();
//    exercise2();
    return 0;
}
