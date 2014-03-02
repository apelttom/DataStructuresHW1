#include "exercises.h"

#include <iostream>
using namespace std;

double const PI = 3.14159;

void Exercises::exercise1(){
    int x = 0, y = 0;
    cout << "Arithmetic operations. Please enter 2 numbers:" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "Results:" << endl;
    cout << "x + y = " << x+y << endl;
    cout << "x * y = " << x*y << endl;
    cout << "x - y = " << x-y << endl;
    cout << "x / y = " << x/y << endl;
}

void Exercises::exercise2(){
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

void Exercises::exercise3(){
    int a = 0,b = 0,c = 0;
    cout << "Right triangle test. Please enter 3 numbers:" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    int maxN = a;
    if(b>maxN) maxN = b;
    if(c>maxN) maxN = c;
    if(maxN==a){
        if(a*a==(b*b+c*c)){
            cout << "These 3 sides can form a right triangle." << endl;
            return;
        }
    }
    if(maxN==b){
        if(b*b==(a*a+c*c)){
            cout << "These 3 sides can form a right triangle." << endl;
            return;
        }
    }
    if(maxN==c){
        if(c*c==(a*a+b*b)){
            cout << "These 3 sides can form a right triangle." << endl;
            return;
        }
    }
    cout << "It is NOT possible to form a right rectangle with these 3 sides." << endl;
}

void Exercises::exercise4(){

}
